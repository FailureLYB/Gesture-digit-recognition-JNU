#include "h\mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置Label形状
    const QString label_style =
        "min-width: 400px; min-height: 400px;max-width:400px; max-height: 400px;border-radius: 200px;  border:0";
    ui->view1->setStyleSheet(label_style);
}

MainWindow::~MainWindow()
{
    delete ui;
}

