#include "variableswindow.h"
#include "ui_variableswindow.h"

VariablesWindow::VariablesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VariablesWindow)
{
    ui->setupUi(this);
}

VariablesWindow::~VariablesWindow()
{
    delete ui;
}
