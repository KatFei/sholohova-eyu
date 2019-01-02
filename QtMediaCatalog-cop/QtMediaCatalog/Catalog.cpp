#include "Catalog.h"
#include <QDir>
#include <qDebug>
#pragma once

Catalog::Catalog(QObject *parent)
	: QObject(parent)
{
	n = 0;
}

Catalog::~Catalog()
{
}

void Catalog::SearchFiles(QString path)
{
	QDir dir(path); qDebug() << "FILLING CATALOG" << dir.absolutePath();
	for (QFileInfo i : dir.entryInfoList()) {

		if (i.absolutePath() == dir.absolutePath())
		{
			if (i.isDir())
			{
				FillCatalog(i.absolutePath() + "/" + i.baseName());
			}
			else
			{
				//files.resize(files.size() + 10); ???
				files.push_back(MediaRecord(i));
				qDebug() << "ADDING " << i.fileName();
				MediaRecord temp(files.at(n));
				qDebug() << "ADDED" << temp.ToString().at(0);
				n += 1;
			}
		};
	};
}

void Catalog::FillCatalog(QString path)
{
	SearchFiles(path);
	
	qDebug() << n << " FILES ADDED";
	emit catalogIsReady();//dataChanged();!!!!!!!!!!чтобы вызывать один раз, надо добавить в НЕ РЕКУРСИВНЫЙ метод
}

QStringList Catalog::GetNextFileData(int i)
{
	if ((i<GetSize())&&(i>=0))
	{

		MediaRecord temp(files.at(i));
		return temp.ToString()<<temp.GetNewDir();
	}
	return QStringList();//  ??? empty?
}

void Catalog::OrganizeFiles(QString dirName, QList<int> chfiles)
{
	qDebug() << "Directory " << dirName;
	dirs.append(dirName);
	for each (int i in chfiles)
	{
		//MediaRecord *temp = &files.;
		files.operator[](i).SetNewDir(dirName);
	}
	emit dirAdded(dirName);			//dirsFullUpdate(dirs);
	emit organized();
}

void Catalog::GenerateCatalog(QString newPath)
{
}

//void Catalog::dataChanged() { if (isChanged) { isChanged = false; emit dataChanged(); } }//?сигнал не имеет реализации он просто вызывается