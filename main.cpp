#include "webpv.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WebPV w;
	w.show();
	return a.exec();
}
