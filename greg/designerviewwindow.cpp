#include "designerviewwindow.h"
#include "ui_designerviewwindow.h"

GreggnerViewWindow::GreggnerViewWindow(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::GreggnerViewWindow)
{
    ui->setupUi(this);
}

GreggnerViewWindow::~GreggnerViewWindow()
{
    delete ui;
}
