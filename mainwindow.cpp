#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    clickCount(0)
{
    ui->setupUi(this);

    ui->formWidget->installEventFilter(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == ui->formWidget && event->type() == QEvent::MouseButtonPress)
    {
        handleMouseClick();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

void MainWindow::handleMouseClick()
{
    clickCount++;
    ui->clickCountLabel->setText(QString::number(clickCount));
}

