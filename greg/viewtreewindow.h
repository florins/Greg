#ifndef VIEWTREEWINDOW_H
#define VIEWTREEWINDOW_H

#include <QWidget>

namespace Ui {
    class ViewTreeWindow;
}

class ViewTreeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ViewTreeWindow(QWidget *parent = 0);
    ~ViewTreeWindow();

private:
    Ui::ViewTreeWindow *ui;
};

#endif // VIEWTREEWINDOW_H
