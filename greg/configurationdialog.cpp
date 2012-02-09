#include "configurationdialog.h"
#include "ui_configurationdialog.h"

#include <QTreeWidgetItem>

ConfigurationDialog::ConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurationDialog),
    mGeneralItem(new QTreeWidgetItem())
{
    ui->setupUi(this);
    init();
}

ConfigurationDialog::~ConfigurationDialog()
{
    delete ui;
    delete mGeneralItem;
}

void ConfigurationDialog::init()
{
    mGeneralItem->setText(0, "General");
    ui->treeWidget->addTopLevelItem(mGeneralItem);
}
