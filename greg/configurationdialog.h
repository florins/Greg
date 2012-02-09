#ifndef CONFIGURATIONDIALOG_H
#define CONFIGURATIONDIALOG_H

#include <QDialog>

class QTreeWidgetItem;

namespace Ui {
    class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigurationDialog(QWidget *parent = 0);
    ~ConfigurationDialog();

private:
    void init();

private:
    Ui::ConfigurationDialog *ui;
    QTreeWidgetItem* mGeneralItem;
};

#endif // CONFIGURATIONDIALOG_H
