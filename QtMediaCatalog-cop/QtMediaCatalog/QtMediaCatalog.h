#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtMediaCatalog.h"
#include "FileDataModel.h"
#include "CheckBoxDelegate.h"
#include <QSortFilterProxyModel>
#include <QStandardItemModel>

#include "qlayout.h"
#include "qlabel.h"
#include "qlineedit.h"
#include "qpushbutton.h"
#include "qtreewidget.h"
#include "qtableview.h"
#include "qlist.h"
#include "Catalog.h"

class QtMediaCatalog : public QMainWindow
{
	Q_OBJECT

public:
	QtMediaCatalog(QWidget *parent = Q_NULLPTR);
private:
	Ui::QtMediaCatalogClass ui;
	QPushButton *butBrowse;
	QPushButton *butSearch;
	QPushButton *butAddToDir;
	QPushButton *butGenerateCat;
	QPushButton *butFilter;
	QLineEdit *editPath;
	QLineEdit *editExt;
	QTableView *fileTable;
	QTreeWidget *treeDirs;
	FileDataModel *model;
	CheckBoxDelegate *chbDelegate;
	QSortFilterProxyModel *filterModel;
	Catalog* catalog;
signals:
	//void BrowseClicked();
	void pathEntered(QString pathToDir);
	void DirEntered(QString dirName);
	//void GenerateClicked();

public slots:
	void UpdateTable();//Catalog* catalog
	void UpdateTree(QStringList dirs);//Qlist �� Catalog
	void AddDirToTree(QString dirName);
private slots :
	void SearchClicked();
	void OpenFileBrowser();//?���������� QString?
	void AddClicked();
	/*void AddFileToCat();
	void GenerateCatalog();*/
};
//Catalog *dataSource;
//void setDataSource(Catalog *source);