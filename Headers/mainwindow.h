#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// MainWindow class inherits from QMainWindow and provides the main application window
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor
    MainWindow(QWidget *parent = nullptr);

    // Destructor
    ~MainWindow();

private slots:
    // Slot function for Start button click event
    void on_Start_clicked();

    // Slot function for Reset button click event
    void on_ResetButton_clicked();

    // Slot function for Push button click event
    void on_Push_clicked();

    // Slot function for Update button click event
    void on_Update_clicked();

    // Slot function for Clone button click event
    void on_Clone_clicked();

    // Slot function for Get Status button click event
    void on_GetStatus_clicked();

    // Slot function for Get Log button click event
    void on_GetLog_clicked();

    // Slot function for Back button click event
    void on_Back_clicked();

    // Slot function for second Back button click event
    void on_Back_2_clicked();

    // Slot function for third Back button click event
    void on_Back_3_clicked();

    // Slot function for fourth Back button click event
    void on_Back_4_clicked();

    // Slot function for fifth Back button click event
    void on_Back_5_clicked();

    // Slot function for Clear Output button click event
    void on_ClearOutput_clicked();

    // Slot function for second Clear Output button click event
    void on_ClearOutput_2_clicked();

    // Slot function for third Clear Output button click event
    void on_ClearOutput_3_clicked();

    // Slot function for Clear Status button click event
    void on_ClearStatus_clicked();

    // Slot function for Clear Log button click event
    void on_ClearLog_clicked();

    // Slot function to handle errors from the process
    void handleError();

    // Slot function to handle output from the process
    void handleOutput();

    // Slot function to handle tab widget current tab change event
    void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui; // UI object
    QProcess *gitProcess; // Process object to handle git commands
    void runGitCommand(const QString &command); // Function to run git commands
    int currentTabIndex; // Current index of the tab widget
    bool Username_Email; // Flag to check if username and email are set
    // Utility function for showing message boxes
    void showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button);

    // Message box for showing messages
    QMessageBox *msgBox;
};
#endif // MAINWINDOW_H
