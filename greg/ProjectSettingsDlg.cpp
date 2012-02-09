#include "ProjectSettingsDlg.h"
#include "ui_ProjectSettingsDlg.h"

ProjectSettingsDlg::ProjectSettingsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectSettingsDlg)
{
    ui->setupUi(this);
}

ProjectSettingsDlg::~ProjectSettingsDlg()
{
    delete ui;
}

void ProjectSettingsDlg::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
