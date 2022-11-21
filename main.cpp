#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <TemperatureGUI.hpp>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    TemperatureGUI *window = new TemperatureGUI();
    window->show();
    return app.exec();
}