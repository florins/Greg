#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>

class QAction;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_actionProject_settings_triggered();
    void on_actionOptions_triggered();
    void on_actionView_triggered();
    void on_actionAbout_triggered();
    void on_actionSave_triggered();
    void on_actionStates_triggered();
    void on_actionConfiguration_triggered();
    void on_actionExit_triggered();

//IMPLEMENTATION
private:
    Ui::MainWindow *ui;
    bool mProjectSaved;
};

#endif // MAINWINDOW_H
