#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendar>
#include <QListWidget>
#include <QMap>
#include <QPixmap>

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
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_clicked();

    void on_listWidget_currentTextChanged(const QString &currentText);

private:
    Ui::MainWindow *ui;
    QPixmap image;
    QMap<QString, QString> dates;
    QString data;
    QString text;
};

#endif // MAINWINDOW_H
