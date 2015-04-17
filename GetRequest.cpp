#include "GetRequest.h"
#include <QtNetwork\QNetworkAccessManager>
#include <QtNetwork\QNetworkRequest>
#include <QtNetwork\QNetworkReply>
#include <QtCore>

GetRequest::GetRequest(const QString& str,QObject* pWidget)
	:QThread(pWidget),m_strURL(str)
{
	m_bStop = true;
	m_bReply  = false;
}


GetRequest::~GetRequest(void)
{
}

void GetRequest::run()
{
	m_pManager = new QNetworkAccessManager(this);
	while(m_bStop)
	{
		QThread::sleep(1);
		emit startMsg();
		m_bReply = false;
		
		m_pReply = m_pManager->get(QNetworkRequest(QUrl(m_strURL)));
		//connect(m_pManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
		if (m_pReply!=NULL)
		{
			//while(!m_bReply && m_bStop)
			//{

			//}
			emit endMsg();
		}
		
		//delete m_pManager;
		//m_pManager = NULL;
	}

}
void GetRequest::replyFinished(QNetworkReply* reply)
{
	m_bReply = true;
}