#include "webpv.h"
#include <QtNetwork\QNetworkAccessManager>
#include <QtNetwork\QNetworkRequest>
#include <QtNetwork\QNetworkReply>
#include <QtCore>
#include <QMessageBox>
#include "GetRequest.h"

WebPV::WebPV(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

WebPV::~WebPV()
{

}

void WebPV::Init()
{
	ui.textEdit_info->append(QString("Init Program\n"));
	ui.lineEdit_net->setText(QString("http://peakking.com"));
	connect(ui.pushButton_start,SIGNAL(clicked()),this,SLOT(OnActionStart())); 
	connect(ui.pushButton_stop,SIGNAL(clicked()),this,SLOT(OnActionEnd())); 
	ui.textEdit_info->append(QString("Init Program finished!\n"));
	m_nPv = 0;
}

void WebPV::OnActionStart()
{
	m_nPv = 0;
	QString strUrl = ui.lineEdit_net->text();
	if (strUrl.isEmpty())
	{

		QMessageBox::about(this,QString("Warnning"),QString("Net is NULL"));
		return;
	}

	m_pThread = new GetRequest(strUrl,this);
	connect(m_pThread,SIGNAL(startMsg()),this,SLOT(OnActionStartMsg())); 
	connect(m_pThread,SIGNAL(endMsg()),this,SLOT(OnActionEndMsg())); 
	m_pThread->start();

}
void WebPV::OnActionEnd()
{
	ui.textEdit_info->append(QString("close Connect URL!\n"));
	delete m_pThread;
	m_pThread = NULL;
	m_nPv = 0;

}


void WebPV::OnActionStartMsg()
{
	QString str = QString("%1-Start Connect URL!\n").arg(m_nPv);
	ui.textEdit_info->append(str);
	

}
void WebPV::OnActionEndMsg()
{
	QString str = QString("%1-finished Connect URL!\n").arg(m_nPv);
	ui.textEdit_info->append(str);
	m_nPv++;
	if (m_nPv > 1000)
	{
		ui.textEdit_info->clear();
	}
}