#ifndef WEBPV_H
#define WEBPV_H

#include <QtWidgets/QWidget>
#include "ui_webpv.h"
class GetRequest;

class WebPV : public QWidget
{
	Q_OBJECT

public:
	WebPV(QWidget *parent = 0);
	~WebPV();

private:
	void Init();
	private slots:
		void OnActionStart();
		void OnActionEnd();
		void OnActionStartMsg();
		void OnActionEndMsg();

private:
	Ui::WebPVClass ui;
	GetRequest*  m_pThread;
	long m_nPv;
};

#endif // WEBPV_H
