#include "Catalog.h"
#include <QDir>
#include <qDebug>
#pragma once

Catalog::Catalog(QObject *parent)
	: QObject(parent)
{
	n = 0;
	it = 0;
}

Catalog::~Catalog()
{
}

void Catalog::FillCatalog(QString path)
{
	
	QDir dir(path);qDebug() << "FILLING CATALOG"<< dir.absolutePath();
	for (QFileInfo i : dir.entryInfoList()) {
		
		if (i.absolutePath() == dir.absolutePath()) 
		{
			if (i.isDir()) 
			{
				FillCatalog(i.absolutePath()+"/"+i.baseName());
			}
			else
			{
				//MediaRecord temp(i);
				fileTodir tempstruct{ MediaRecord(i), "" };
				//files.resize(files.size() + 10);
				files.push_back(tempstruct);
				qDebug() << "ADDING " << i.fileName();
				MediaRecord temp(files.at(n).rec);
			
				qDebug() << "ADDED"<<temp.ToString().at(0);
				n += 1;
			}
		};
	};
	qDebug() << n << " FILES ADDED";
	emit catalogIsReady();//dataChanged();!!!!!!!!!!чтобы вызывать один раз, надо добавить в НЕ РЕКУРСИВНЫЙ метод
}

QStringList Catalog::GetNextFileData(int i)
{
	if ((i<GetSize())&&(i>=0))
	{

		MediaRecord temp(files.at(i).rec);
		return temp.ToString();
	}/*if (it<GetSize())
	{
		
		MediaRecord temp(files.at(it).rec);
		it++;
		return temp.ToString();
	}*/
	return QStringList();//  ??? empty?
}

void Catalog::OrganizeFiles(QString dirName, QList<int> chfiles)
{
	qDebug() << "Directory " << dirName;
	dirs.append(dirName);
	for each (int i in chfiles)
	{
		//files.at(i).dir = dirName;
	}
	emit dirsFullUpdate(dirs);
}

void Catalog::GenerateCatalog(QString newPath)
{
}

//void Catalog::dataChanged() { if (isChanged) { isChanged = false; emit dataChanged(); } }//?сигнал не имеет реализации он просто вызывается