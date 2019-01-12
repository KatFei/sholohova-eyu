#include "ProxyModel.h"
#include <qDebug>
#pragma once

ProxyModel::ProxyModel(QObject *parent)
	: QSortFilterProxyModel(parent)
{
}

ProxyModel::~ProxyModel()
{
}

bool ProxyModel::filterAcceptsRow(int srcRow, const QModelIndex & srcParent) const
{
	QModelIndex index = sourceModel()->index(srcRow, 4, srcParent);
	QModelIndex indexName = sourceModel()->index(srcRow, 2, srcParent);
	if(!sourceModel()->data(index).toString().isEmpty())
	{ 
		//qDebug() << sourceModel()->data(indexName).toString();
		//qDebug() << "FILTERING IN IF";
		
		return false; }
	//qDebug() << "FILTERING";
	//qDebug() << sourceModel()->data(indexName).toString();
	return true;

}

QVariant ProxyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	return sourceModel()->headerData(section, orientation, role);
}

void ProxyModel::SetSearchString(QString str)
{
}

void ProxyModel::SetFileType(QString type)
{
}
