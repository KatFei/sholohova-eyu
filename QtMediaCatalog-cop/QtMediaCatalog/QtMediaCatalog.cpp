#include "QtMediaCatalog.h"
#include "EnterPathDialog.h"
#include <QHeaderView>
#include <QInputDialog>
#include <QRegExp>
#include <QFileDialog>
#include <QDir>
#include <qDebug>
#pragma once

QtMediaCatalog::QtMediaCatalog(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QWidget *mainWdgt = new QWidget(this);
	catalog = new Catalog();

		//Widgets
	butBrowse = new QPushButton(tr("Browse"), mainWdgt);//?tr
	butSearch = new QPushButton("Search", mainWdgt);
	butAddToDir = new QPushButton("Add To Directory", mainWdgt);
	butAddToDir->setEnabled(false);
	butGenerateCat = new QPushButton("Generate Media Catalog", mainWdgt);
	butFilter = new QPushButton("Filter", mainWdgt);
	editFilter = new QLineEdit(mainWdgt);
	editFilter->setPlaceholderText("Enter pattern for search");
	combType = new QComboBox(mainWdgt);
	combType->insertItems(0, QStringList() << "Audio" << "Video");
	editPath = new QLineEdit(mainWdgt);
	editPath->setPlaceholderText("Path to the directory (click \"Browse\"\)");
	editPath->setReadOnly(true);
	editExt = new QLineEdit(mainWdgt);
	editExt->setPlaceholderText("Extensions");
	treeDirs = new QTreeWidget(mainWdgt);
	treeDirs->setHeaderHidden(true);
	fileTable = new QTableView(mainWdgt);//QTableWidget(1,5,mainWdgt)
	model = Q_NULLPTR;
	chbDelegate = new CheckBoxDelegate(this);//parent- fileTable?
	fileTable->setItemDelegateForColumn(0,chbDelegate);
	filterModel = new ProxyModel(this);
	fileTable->setSortingEnabled(true);
	fileTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	fileTable->horizontalHeader()->setMinimumWidth(25);

	/*model = new FileDataModel();
	model->setDataSource(catalog);
	
	//fileTable->setModel(model);*/
	fileTable->setFixedHeight(400);
	fileTable->verticalHeader()->hide();
	fileTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	//QHeaderView *verticalHeader = fileTable->verticalHeader();

		//Layout and widgets positioning 
	QGridLayout *mainLayout = new QGridLayout;
	//fileTable->setRowHeight();
	//QList<QWidget> *widgets = new QList<QWidget>;
	////widgets->append(butAddToDir);
	mainLayout->addWidget(editPath, 0, 0, 1, 4, Qt::AlignVCenter);
	mainLayout->addWidget(butBrowse,0,4);//, Qt::AlignLeft
	//butBrowse->setMaximumWidth(200);
	mainLayout->addWidget(butSearch,0,5);//, Qt::AlignLeft
	//butSearch->setMaximumWidth(200);
	mainLayout->addWidget(editFilter, 2, 0, 1, 2, Qt::AlignVCenter);
	mainLayout->addWidget(combType, 2, 2, Qt::AlignJustify);
	mainLayout->addWidget(butFilter, 2, 3, Qt::AlignRight);
	combType->setGeometry(butFilter->geometry());
	butFilter->setFixedWidth(100);
	mainLayout->addWidget(editExt, 2, 4, 1, 2);
	mainLayout->addWidget(fileTable, 3, 0, 16, 4);
	mainLayout->addWidget(treeDirs, 3, 4, 16, 2);
	mainLayout->addWidget(butAddToDir,20,0);
	butAddToDir->setFixedWidth(130);
	mainLayout->addWidget(butGenerateCat,20,3);

	mainLayout->setAlignment(Qt::AlignTop);
	mainWdgt->setLayout(mainLayout);
	setCentralWidget(mainWdgt);
	setWindowTitle("Media Catalog");
	//setBaseSize();
	setFixedSize(900, 600);

	//Connecting signals and slots
	connect(this, SIGNAL(pathEntered(QString)), catalog, SLOT(FillCatalog(QString)));
	connect(catalog, SIGNAL(catalogIsReady()), this, SLOT(UpdateTable()));
	connect(butBrowse, SIGNAL(clicked()), this, SLOT(OpenFileBrowser()));
	connect(butSearch, SIGNAL(clicked()), this, SLOT(SearchClicked()));
	connect(butAddToDir, SIGNAL(clicked()), this, SLOT(AddClicked()));/*
	connect(butGenerateCat, SIGNAL(clicked()), this, SLOT(GenerateCatalog()));
	connect(catalog, SIGNAL(dirsFullUpdate(QStringList)), this, SLOT(UpdateTree(QStringList)));*/
	
	connect(catalog, SIGNAL(dirAdded(QString)), this, SLOT(AddDirToTree(QString)));
}

void QtMediaCatalog::SearchClicked() {
	qDebug() << "PATH ENTERED"<< editPath->text();
	emit pathEntered(editPath->text());
	
}
void QtMediaCatalog::UpdateTable()
{
	if (model != Q_NULLPTR) { delete model; } //model->deleteLater();	}
		qDebug() << "INITIALIZING MODEL";
		model = new FileDataModel(this);
		model->setDataSource(catalog);
		filterModel->setSourceModel(model);
		fileTable->setModel(filterModel);
		fileTable->hideColumn(4);

	//connect(model, SIGNAL(noFilesChoosen()), butAddToDir, SLOT(setEnabled(false)));//[&] {AddToDir->setEnabled(false); }
	connect(model, SIGNAL(fileChoosen(bool)), butAddToDir, SLOT(setEnabled(bool)));//[&] {AddToDir->setEnabled(true); qDebug() << "LAMBDA"; }

	connect(this, SIGNAL(DirEntered(QString)), model, SLOT(SendFilesList(QString)));
	connect(model, SIGNAL(addFilesToDir(QString, QList<int>)), catalog, SLOT(OrganizeFiles(QString, QList<int>)));
	//calling invalidate() to refresh filter settings
	//we need this when adding files to directory
	//so they should be removed from the view
	connect(catalog, SIGNAL(organized()), filterModel, SLOT(invalidate()));
	
}
void QtMediaCatalog::UpdateTree(QStringList dirs)
{
	// for full update
	qDebug() << "UPDATING TREE";
	QList<QTreeWidgetItem*> dirsTmp;

	for each (QString str in dirs)
	{	
		QTreeWidgetItem *item = new QTreeWidgetItem();
		item->setText(0, str);
		dirsTmp.append(item);
	}
	treeDirs->addTopLevelItems(dirsTmp);
}
void QtMediaCatalog::AddDirToTree(QString dirName)
{
	
	qDebug() << "ADDING DIR TO TREE";
	
	// добавить парсинг входящего имени для определения уровня директории в дереве

	dirName.replace("\\", "/");
	QStringList dirsTmp = dirName.split("/");
	// if it's a top level item - add to tree
	if (dirsTmp.size() == 1) //	QList<QTreeWidgetItem*> rootItems = treeDirs->findItems(dirsTmp[0], Qt::MatchFixedString | Qt::MatchCaseSensitive); if (rootItems.isEmpty() || (dirsTmp.size() == 1))
	{
		QTreeWidgetItem* temp;
		temp = new QTreeWidgetItem();
		temp->setText(0, dirsTmp[0]);
		treeDirs->addTopLevelItem(temp);
		treeDirs->expandItem(temp);
		qDebug() << "DIR ADDED";
	}
	//if not, we should find it's root node
	else 
	{
		QList<QTreeWidgetItem*> rootItems = treeDirs->findItems(dirsTmp[0], Qt::MatchFixedString | Qt::MatchCaseSensitive);
		QTreeWidgetItem* parentItem;
		for(int j = 0; j<rootItems.size(); j++){
			if(rootItems[j]->text(0)== dirsTmp[0])		
				parentItem = rootItems[j];
		}
		for(int i=1; i<dirsTmp.size()-1;i++)
		{
			if (parentItem->text(0) == dirsTmp[i])	;
			for (int j = 0; j<parentItem->childCount(); j++) {
				if (parentItem->child(j)->text(0) == dirsTmp[i])
					parentItem = parentItem->child(j);
			}
		}
		if (parentItem->text(0)!=dirsTmp.last())
		{
			QTreeWidgetItem* temp;
			temp = new QTreeWidgetItem();
			temp->setText(0, dirsTmp.last());
			parentItem->addChild(temp);
			treeDirs->expandItem(temp);
			qDebug() << "DIR ADDED";
		}

	}
	
	/*QTreeWidgetItem* temp;
	dirName.replace("\\", "/");
	if (dirName.count("/")!=0)
	{
		QStringList dirsTmp = dirName.split("/");

		if (treeDirs->findItems(dirsTmp[0], Qt::MatchFixedString).isEmpty())
		{
			temp->setText(0, dirsTmp[0]);
			treeDirs->addTopLevelItem(temp);
		}
		for each(QString str in dirsTmp) 
		{
		
		}
	}
	else
	{ 
		temp->setText(0, dirName);
		treeDirs->addTopLevelItem(temp); 
	}*/
		
}
void QtMediaCatalog::OpenFileBrowser() {
	qDebug() << "OPEN FILE DIALOG";
	/*QFileDialog *fileBrowser = new QFileDialog(this, tr("Choose Directory"));
	fileBrowser->setOptions(QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);
	fileBrowser->setFileMode(QFileDialog::Directory);
	fileBrowser->show();
	editPath->setText(fileBrowser->directory().absolutePath());//надо ли  делать exec
	*/
	editPath->setText(QFileDialog::getExistingDirectory(this, tr("Choose Directory"),
		"C:/",
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks));//native file dialog
}

void QtMediaCatalog::AddClicked()
{
	bool ok;
	// добавить проверку вводимого значения с помощью регэксп (условия по именованию папок! В ОТЧЕТ в теор часть)

	QString dirName = QInputDialog::getText(this, "Input Dialog", "Enter directory name", QLineEdit::Normal, QString(), &ok);

	if (ok && !dirName.isEmpty())
		emit DirEntered(dirName);
	;

	//connect(butAdd, SIGNAL(clicked()), editDir,SLOT)
	//проверять ввели или не ввели (отмена или ок)
	// как вообще возвращать значение из диалога? по кнопке ok сигналом в слот?
	
}
