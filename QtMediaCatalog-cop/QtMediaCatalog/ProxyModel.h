#pragma once

#include <QSortFilterProxyModel>

class ProxyModel : public QSortFilterProxyModel
{
	Q_OBJECT

public:
	ProxyModel(QObject *parent);
	~ProxyModel();
	bool filterAcceptsRow(int srcRow, const QModelIndex &srcParent) const override;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
	void SetSearchString(QString str);
	void SetFileType(QString type);
};
