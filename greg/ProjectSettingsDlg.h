#ifndef PROJECTSETTINGSDLG_H
#define PROJECTSETTINGSDLG_H

#include <QDialog>

namespace Ui {
    class ProjectSettingsDlg;
}

class ProjectSettingsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectSettingsDlg(QWidget *parent = 0);
    ~ProjectSettingsDlg();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ProjectSettingsDlg *ui;
};

#endif // PROJECTSETTINGSDLG_H
