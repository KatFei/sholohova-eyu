#include "MediaRecord.h"
#include <qDebug>
#pragma once

MediaRecord::MediaRecord() {}
MediaRecord::MediaRecord(QString filePath)
{
	fileInfo.setFile((filePath));
	newDir = "";
}
MediaRecord::MediaRecord(QFileInfo fInfo)
{
	fileInfo = fInfo;
	newDir = "";
}
/*MediaRecord::MediaRecord(const MediaRecord & rec)
{
	qDebug() << "In copy constructor";
	fileInfo = rec.fileInfo;
}*/
MediaRecord::~MediaRecord() {}

void MediaRecord::CopyFile(QString newPath)
{
	QFile fileTmp(fileInfo.absoluteFilePath());
	if (!fileTmp.copy(fileInfo.absoluteFilePath(), newPath + "/" + newDir)) {
		qDebug() << "Copying file "<<fileInfo.absoluteFilePath()<<" failed!"
			;
	}
}

QStringList MediaRecord::ToString()
{
	return (QStringList()<<fileInfo.fileName()
		<< fileInfo.completeSuffix())
		<< QString::number((float)fileInfo.size()/1024/1024,'g',2)+" Mb";
}

bool MediaRecord::IsOrganized()
{
	if (newDir == "") {
		return false;
	}
	return true;
}

void MediaRecord::SetNewDir(QString dirName)
{
	newDir = dirName;
	qDebug() << "File " << fileInfo.fileName() << " was put into " << newDir;
}

QString MediaRecord::GetNewDir()
{
	return newDir;
}


//MediaRecord::MediaRecord(QObject *parent)
//	: QObject(parent)
//{
//}
//
//MediaRecord::~MediaRecord()
//{
//}
