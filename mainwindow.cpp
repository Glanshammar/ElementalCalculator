#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showStandardMode()
{

}


void MainWindow::showScienceMode()
{

}


void MainWindow::showDateMode()
{

}


void MainWindow::on_actionStandard_triggered()
{
    ui->actionStandard->setChecked(true);
    ui->actionDate_Calculation->setChecked(false);
    ui->actionScientific->setChecked(false);
    MainWindow::showStandardMode();
}


void MainWindow::on_actionScientific_triggered()
{
    ui->actionScientific->setChecked(true);
    ui->actionDate_Calculation->setChecked(false);
    ui->actionStandard->setChecked(false);
    MainWindow::showScienceMode();
}


void MainWindow::on_actionDate_Calculation_triggered()
{
    ui->actionScientific->setChecked(false);
    ui->actionDate_Calculation->setChecked(true);
    ui->actionStandard->setChecked(false);
    MainWindow::showDateMode();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::add_expressionSymbol(QChar symbol)
{
    if (!mathExpression.isEmpty()) {
        QChar lastChar = mathExpression.at(mathExpression.length() - 1);
        if (lastChar.isDigit() || lastChar == ')') {  // Only add '+' after a number or closing parenthesis
            mathExpression.append(symbol);
        } else {
            // Optionally replace last operator with new one
            mathExpression.chop(1); // Remove last character
            mathExpression.append(symbol); // Add new operator
        }
    }
    ui->responseLabel->setText(mathExpression);
}

void MainWindow::on_button1_clicked()
{
    mathExpression.append("1");
    ui->responseLabel->setText(mathExpression);
}


void MainWindow::on_buttonEquals_clicked()
{
    QChar lastChar = mathExpression.at(mathExpression.length() - 1);
    if (!lastChar.isDigit()) {
        return;
    }
    double result = jsEngine.evaluate(mathExpression).toNumber();
    QString resultString = QString::number(result);
    ui->responseLabel->setText(resultString);
    qDebug() << result;
}


void MainWindow::on_buttonAddition_clicked()
{
    MainWindow::add_expressionSymbol('+');
}
