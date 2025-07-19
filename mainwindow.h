#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QJSEngine>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionStandard_triggered();
    void on_actionScientific_triggered();
    void showStandardMode();
    void showScienceMode();
    void showDateMode();
    void on_actionDate_Calculation_triggered();
    void on_actionExit_triggered();
    void on_button1_clicked();
    void on_buttonEquals_clicked();
    void add_expressionSymbol(QChar symbol);
    void on_buttonAddition_clicked();

private:
    Ui::MainWindow *ui;
    QString mathExpression;
    QJSEngine jsEngine;
};
#endif // MAINWINDOW_H
