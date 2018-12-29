#include "QtMediaCatalog.h"
#include "EnterPathDialog.h"
#include <QHeaderView>
#include <QInputDialog>
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

	editPath = new QLineEdit("Path to the directory", mainWdgt);
	editPath->setReadOnly(true);
	editExt = new QLineEdit("Extensions", mainWdgt);
	treeDirs = new QTreeWidget(mainWdgt);
	fileTable = new QTableView(mainWdgt);//QTableWidget(1,5,mainWdgt)
	model = Q_NULLPTR;
	chbDelegate = new CheckBoxDelegate(this);//parent- fileTable?
	fileTable->setItemDelegateForColumn(0,chbDelegate);
	filterModel = new QSortFilterProxyModel(this);
	fileTable->setSortingEnabled(true);
	/*model = new FileDataModel();
	model->setDataSource(catalog);
	
	//fileTable->setModel(model);*/
	fileTable->setFixedHeight(400);
	fileTable->verticalHeader()->hide();
	fileTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	/**/
	//QHeaderView *verticalHeader = fileTable->verticalHeader();
		//Layouts
	//QHBoxLayout *hLayout1 = new QHBoxLayout;
	//QHBoxLayout *hLayout2 = new QHBoxLayout;
	//QHBoxLayout *hLayout3 = new QHBoxLayout;
	//QVBoxLayout *mainLayout = new QVBoxLayout;
	//mainLayout->addLayout(hLayout1);
	//mainLayout->addLayout(hLayout2);
	//mainLayout->addLayout(hLayout3);
	QGridLayout *mainLayout = new QGridLayout;
	//fileTable->setRowHeight();
	//QList<QWidget> *widgets = new QList<QWidget>;
	////widgets->append(butAddToDir);
	mainLayout->addWidget(editPath, 0, 0, 1, 4, Qt::AlignTop);
	mainLayout->addWidget(butBrowse,0,4);//, Qt::AlignLeft
	//butBrowse->setMaximumWidth(200);
	mainLayout->addWidget(butSearch,0,5);//, Qt::AlignLeft
	//butSearch->setMaximumWidth(200);
	mainLayout->addWidget(butFilter, 2, 3, Qt::AlignRight);
	butFilter->setFixedWidth(100);
	mainLayout->addWidget(editExt, 2, 4, 1, 2);
	mainLayout->addWidget(fileTable, 3, 0, 16, 4);
	mainLayout->addWidget(treeDirs, 3, 4, 16, 2);
	mainLayout->addWidget(butAddToDir,20,0);
	butAddToDir->setFixedWidth(130);
	mainLayout->addWidget(butGenerateCat,20,3);
	
	/*hLayout1->addWidget(editPath);
	hLayout1->addWidget(butBrowse);
	hLayout1->addWidget(butSearch);
	hLayout3->addWidget(butAddToDir);
	hLayout3->addWidget(butGenerateCat);*/
	mainLayout->setAlignment(Qt::AlignTop);
	mainWdgt->setLayout(mainLayout);
	setCentralWidget(mainWdgt);
	setWindowTitle("Media Catalog");
	//setBaseSize();
	setFixedSize(900, 600);
	connect(this, SIGNAL(pathEntered(QString)), catalog, SLOT(FillCatalog(QString)));
	connect(catalog, SIGNAL(catalogIsReady()), this, SLOT(UpdateTable()));
	connect(butBrowse, SIGNAL(clicked()), this, SLOT(OpenFileBrowser()));
	connect(butSearch, SIGNAL(clicked()), this, SLOT(SearchClicked()));
	connect(butAddToDir, SIGNAL(clicked()), this, SLOT(AddClicked()));/*
	connect(butGenerateCat, SIGNAL(clicked()), this, SLOT(GenerateCatalog()));*/
	connect(catalog, SIGNAL(dirsFullUpdate(QStringList)), this, SLOT(UpdateTree(QStringList)));
}

void QtMediaCatalog::SearchClicked() {
	qDebug() << "PATH ENTERED"<< editPath->text();
	emit pathEntered(editPath->text());
	
}
void QtMediaCatalog::UpdateTable()
{
	if (model != Q_NULLPTR)	{	delete model;	} //model->deleteLater();	}
		qDebug() << "INITIALIZING MODEL";
		model = new FileDataModel(this);
		model->setDataSource(catalog);
		fileTable->setModel(model);
	connect(model, SIGNAL(noFilesChoosen()), butAddToDir, SLOT(setEnabled(false)));//[&] {AddToDir->setEnabled(false); }
	connect(model, SIGNAL(fileChoosen(bool)), butAddToDir, SLOT(setEnabled(bool)));//[&] {AddToDir->setEnabled(true); qDebug() << "LAMBDA"; }

	connect(this, SIGNAL(DirEntered(QString)), model, SLOT(SendFilesList(QString)));
	connect(model, SIGNAL(addFilesToDir(QString, QList<int>)), catalog, SLOT(OrganizeFiles(QString, QList<int>)));

	/*else
	{
		
		//fileTable->model = (model ? model : QAbstractItemModelPrivate::staticEmptyModel());
		//model->~FileDataModel();
		model = new FileDataModel();
		model->setDataSource(catalog);
		fileTable->setModel(model);
	}*/
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
	
	QTreeWidgetItem *temp = new QTreeWidgetItem();
	temp->setText(0, dirName);
	// �������� ������� ��������� ����� ��� ����������� ������ ���������� � ������
	// �������� ������� - ���� \ ���� /
	QStringList dirsTmp = dirName.split("\\");
	for each(QString str in dirsTmp) 
	{
		
	}
	for(int i=dirName.count("\\"); i--; i>0)
	{
		QString temp;
		//temp = dirName.
	}

	treeDirs->addTopLevelItem(temp);
}
void QtMediaCatalog::OpenFileBrowser() {
	qDebug() << "OPEN FILE DIALOG";
	/*QFileDialog *fileBrowser = new QFileDialog(this, tr("Choose Directory"));
	fileBrowser->setOptions(QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);
	fileBrowser->setFileMode(QFileDialog::Directory);
	fileBrowser->show();
	editPath->setText(fileBrowser->directory().absolutePath());//���� ��  ������ exec
	*/
	editPath->setText(QFileDialog::getExistingDirectory(this, tr("Choose Directory"),
		"C:/",
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks));//native file dialog
}

void QtMediaCatalog::AddClicked()
{
	bool ok;
	QString dirName = QInputDialog::getText(this, "Input Dialog", "Enter directory name", QLineEdit::Normal, QString(), &ok);

	if (ok && !dirName.isEmpty())
		// �������� �������� ��������� �������� � ������� ������� (������� �� ���������� �����! � ����� � ���� �����)
		emit DirEntered(dirName);
	;

	//connect(butAdd, SIGNAL(clicked()), editDir,SLOT)
	//��������� ����� ��� �� ����� (������ ��� ��)
	// ��� ������ ���������� �������� �� �������? �� ������ ok �������� � ����?
	
}
