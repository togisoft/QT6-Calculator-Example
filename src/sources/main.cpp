#include <iostream>
#include <QApplication>
#include "Calculator.hpp"
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Calculator calc;
	calc.setStyleSheet("background-color:black;color:white;");
	calc.show();
	return app.exec();
}