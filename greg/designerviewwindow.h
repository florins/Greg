#ifndef DESIGNERVIEWWINDOW_H
#define DESIGNERVIEWWINDOW_H

#include <QMdiSubWindow>


namespace Ui {
    class GreggnerViewWindow;
}

class GreggnerViewWindow : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit GreggnerViewWindow(QWidget *parent = 0);
    ~GreggnerViewWindow();

private:
    Ui::GreggnerViewWindow *ui;
};

#endif // DESIGNERVIEWWINDOW_H
