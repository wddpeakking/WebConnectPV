#pragma once
#include "qthread.h"
#include <QString>
#include <QObject>
class QNetworkAccessManager;
class QNetworkReply;
class GetRequest :
	public QThread
{
	Q_OBJECT
public:
	GetRequest(const QString& str,QObject* pWidget=0);
	~GetRequest(void);
	void run();

	void stopPv(){m_bStop = false;};
private slots:
	void replyFinished(QNetworkReply*);
Q_SIGNALS:
	void startMsg();
	void endMsg();
private:
	bool m_bStop;
	QString m_strURL;
	QNetworkAccessManager* m_pManager;
	QNetworkReply* m_pReply;
	bool m_bReply;
};

