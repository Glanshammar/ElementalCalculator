#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow window;
    window.setMinimumSize(350, 500);
    window.show();
    return application.exec();
}
