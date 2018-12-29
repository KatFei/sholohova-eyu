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
}

QStringList MediaRecord::ToString()
{
	return (QStringList()<<fileInfo.baseName()
		<< fileInfo.completeSuffix())
		<< QString::number(fileInfo.size()/1024);
}

bool MediaRecord::IsOrganized()
{
	if (newDir == "") {
		return false;
	}
	return true;
}


//MediaRecord::MediaRecord(QObject *parent)
//	: QObject(parent)
//{
//}
//
//MediaRecord::~MediaRecord()
//{
//}
