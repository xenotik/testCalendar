#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // calend = new QCalendarWidget;


    //ui->cw = calend;

    calendar = new calendarWWW();
    auto l = new QVBoxLayout();
    l->addWidget(calendar);
    centralWidget()->setLayout(l);

}

MainWindow::~MainWindow()
{
    delete ui;
}

