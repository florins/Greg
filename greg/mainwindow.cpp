#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "savedialog.h"
#include "configurationdialog.h"
#include "designerviewwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QCoreApplication>
#include <QAction>
#include <QCloseEvent>

#include "ProjectSettingsDlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mProjectSaved(false)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
/*    if (!mProjectSaved)
    {
        on_actionSave_triggered();
    }
    QList<QMdiSubWindow*> windowList = ui->designerMdi->subWindowList();
    while (!windowList.isEmpty())
        windowList.takeFirst();
    QCoreApplication* app = QApplication::instance();
    app->quit();*/
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    ui->designerMdi->closeAllSubWindows();
    if (ui->designerMdi->currentSubWindow()) {
        event->ignore();
    } else {
        //writeSettings();
        event->accept();
    }
}

void MainWindow::on_actionConfiguration_triggered()
{
    static ConfigurationDialog dialog;
    dialog.show();
}

void MainWindow::on_actionStates_triggered()
{

}

void MainWindow::on_actionSave_triggered()
{
    static SaveDialog s;
    s.show();
}

void MainWindow::on_actionAbout_triggered()
{
    static QMessageBox msgBox;
    msgBox.setText("Greg application");
    msgBox.exec();
}

//this is for the designer views window
void MainWindow::on_actionView_triggered()
{
    static GreggnerViewWindow w;
    ui->designerMdi->addSubWindow(&w);
    if (!w.isVisible())
        w.show();
}

void MainWindow::on_actionOptions_triggered()
{
    static ConfigurationDialog dialog;
    dialog.open();
}

void MainWindow::on_actionProject_settings_triggered()
{
    static ProjectSettingsDlg dialog;
    dialog.open();
}
