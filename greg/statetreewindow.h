#ifndef STATETREEWINDOW_H
#define STATETREEWINDOW_H

#include <QWidget>

namespace Ui {
    class StateTreeWindow;
}

class StateTreeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StateTreeWindow(QWidget *parent = 0);
    ~StateTreeWindow();

private:
    Ui::StateTreeWindow *ui;
};

#endif // STATETREEWINDOW_H
