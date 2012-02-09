#ifndef VARIABLESWINDOW_H
#define VARIABLESWINDOW_H

#include <QWidget>

namespace Ui {
    class VariablesWindow;
}

class VariablesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit VariablesWindow(QWidget *parent = 0);
    ~VariablesWindow();

private:
    Ui::VariablesWindow *ui;
};

#endif // VARIABLESWINDOW_H
