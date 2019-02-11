#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "Yolo.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->runButton, &QPushButton::clicked, this, &MainWindow::runYolo );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::runYolo(){
    yolo.runYolo(ui->fileLineEdit->text());
}
