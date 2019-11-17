#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMessageBox::warning(this, "Congrats!" "Your program opened!")
}

MainWindow::~MainWindow()
{
    delete ui;
}

