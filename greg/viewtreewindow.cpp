#include "viewtreewindow.h"
#include "ui_viewtreewindow.h"

ViewTreeWindow::ViewTreeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewTreeWindow)
{
    ui->setupUi(this);
}

ViewTreeWindow::~ViewTreeWindow()
{
    delete ui;
}
