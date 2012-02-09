#include "statetreewindow.h"
#include "ui_statetreewindow.h"

StateTreeWindow::StateTreeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StateTreeWindow)
{
    ui->setupUi(this);
}

StateTreeWindow::~StateTreeWindow()
{
    delete ui;
}
