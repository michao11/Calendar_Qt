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

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    QString day = QString::number(date.day());
    QString month = QString::number(date.month());
    QString year = QString::number(date.year());

    data = day + " - " + month + " - " + year;

    ui->lineEdit->setText(dates[data]);

    if (date.day() % 2 == 0) {
        image.load(":/new/prefix1/images/img1.jpg");
        ui->label->setPixmap(image);
    }
    else {
        image.load(":/new/prefix1/images/img2.jpg");
        ui->label->setPixmap(image);
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->lineEdit->text() != "") {
        text = ui->lineEdit->text();
        dates[data] = text;
        ui->listWidget->addItem(data);
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_listWidget_currentTextChanged(const QString &currentText)
{
    ui->lineEdit->setText(dates[currentText]);
}
