#include "Headers/mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

// Constructor for MainWindow class
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gitProcess(new QProcess(this)) // Initialize gitProcess
    , msgBox(new QMessageBox(this))
{
    // Setup the UI
    ui->setupUi(this);

    // Connect the gitProcess output and error signals to the respective handlers
    connect(gitProcess, &QProcess::readyReadStandardOutput, this, &MainWindow::handleOutput);
    connect(gitProcess, &QProcess::readyReadStandardError, this, &MainWindow::handleError);

    // Load and scale the logo image, then set it to label_2
    QPixmap Pix("../../../Logos/logo.jpg");
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(Pix.scaled(w, h, Qt::KeepAspectRatio));

    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);

    // Initialize flags
    Username_Email = false;
}

// Destructor for MainWindow class
MainWindow::~MainWindow()
{
    delete ui;
    delete gitProcess;
}

// Function to run git commands using QProcess
void MainWindow::runGitCommand(const QString &command)
{
    QStringList arguments = QProcess::splitCommand(command);
    QString program = arguments.takeFirst();

    // Start the new process
    gitProcess->start(program, arguments);
    if (!gitProcess->waitForStarted())
    {
        qDebug() << "Failed to start process";
    }

    if (!gitProcess->waitForFinished())
    {
        qDebug() << "Process did not finish";
    }
    // Terminate the process after it finishes
    gitProcess->terminate();
}

void MainWindow::showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button)
{
    msgBox->setWindowTitle(title);        // Set the title of the message box
    msgBox->setText(text);                // Set the text of the message box
    msgBox->setIcon(icon);                // Set the icon of the message box
    msgBox->setStandardButtons(button);  // Set the standard buttons of the message box
    msgBox->adjustSize();                 // Adjust the size of the message box
    msgBox->exec();                       // Show the message box
}

// Slot for Start button click event
void MainWindow::on_Start_clicked()
{
    qDebug() << "Start button clicked" << Qt::endl;

    if (!Username_Email)
    {
        // Get username and email from input fields
        QString name = ui->lineEdit_9->text();
        QString email = ui->lineEdit_10->text();

        // Configure git with username and email
        runGitCommand("git config --global user.name " + name);
        runGitCommand("git config --global user.email " + email);
        // Set Username_Email to true and disable name and email line edits
        Username_Email = true;
        ui->lineEdit_9->setEnabled(false);
        ui->lineEdit_10->setEnabled(false);
    }

    // Determine which tab to enable based on comboBox selection
    QString start = ui->comboBox->currentText();

    if (start == ui->comboBox->itemText(0))
    {
        // Enable the second tab and disable all others
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, true);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, false);
        ui->tabWidget->setTabEnabled(4, false);
        ui->tabWidget->setTabEnabled(5, false);
        ui->tabWidget->setCurrentIndex(1);
    }
    else if (start == ui->comboBox->itemText(1))
    {
        // Enable the third tab and disable all others
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, true);
        ui->tabWidget->setTabEnabled(3, false);
        ui->tabWidget->setTabEnabled(4, false);
        ui->tabWidget->setTabEnabled(5, false);
        ui->tabWidget->setCurrentIndex(2);
    }
    else if (start == ui->comboBox->itemText(2))
    {
        // Enable the fourth tab and disable all others
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, true);
        ui->tabWidget->setTabEnabled(4, false);
        ui->tabWidget->setTabEnabled(5, false);
        ui->tabWidget->setCurrentIndex(3);
    }
    else if (start == ui->comboBox->itemText(3))
    {
        // Enable the fifth tab and disable all others
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, false);
        ui->tabWidget->setTabEnabled(4, true);
        ui->tabWidget->setTabEnabled(5, false);
        ui->tabWidget->setCurrentIndex(4);
    }
    else if (start == ui->comboBox->itemText(4))
    {
        // Enable the sixth tab and disable all others
        ui->tabWidget->setTabEnabled(0, false);
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
        ui->tabWidget->setTabEnabled(3, false);
        ui->tabWidget->setTabEnabled(4, false);
        ui->tabWidget->setTabEnabled(5, true);
        ui->tabWidget->setCurrentIndex(5);
    }
}

// Slot for Reset button click event
void MainWindow::on_ResetButton_clicked()
{
    // Set Username_Email to false and enable name and email line edits
    Username_Email = false;
    ui->lineEdit_9->setEnabled(true);
    ui->lineEdit_10->setEnabled(true);
}

// Slot for Push button click event
void MainWindow::on_Push_clicked()
{
    qDebug() << "Push button clicked" << Qt::endl;

    // Get input values from the UI
    QString path = ui->lineEdit_4->text();
    QString url = ui->lineEdit->text();
    QString comment = ui->lineEdit_2->text();

    if(path.isEmpty() || url.isEmpty() || comment.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
    }

    gitProcess->setWorkingDirectory(path);

    // Execute git commands to push changes to the repository
    runGitCommand("git init");
    runGitCommand("git add .");
    runGitCommand("git commit -m \"" + comment + "\"");
    runGitCommand("git branch -M master");
    runGitCommand("git remote add origin " + url);
    runGitCommand("git push origin master");
}

// Slot for Update button click event
void MainWindow::on_Update_clicked()
{
    qDebug() << "Update button clicked" << Qt::endl;

    // Get input values from the UI
    QString path = ui->lineEdit_3->text();
    QString comment = ui->lineEdit_6->text();

    if(path.isEmpty() || comment.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
    }

    gitProcess->setWorkingDirectory(path);

    // Execute git commands to update the repository
    runGitCommand("git pull origin master");
    runGitCommand("git add .");
    runGitCommand("git commit -m \"" + comment + "\"");
    runGitCommand("git push origin master");
}

// Slot for Clone button click event
void MainWindow::on_Clone_clicked()
{
    qDebug() << "Clone button clicked" << Qt::endl;

    // Get input values from the UI
    QString path = ui->lineEdit_7->text();
    QString url = ui->lineEdit_8->text();

    if(path.isEmpty() || url.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
    }

    gitProcess->setWorkingDirectory(path);

    // Execute git clone command
    runGitCommand("git clone " + url);
}

// Slot for Get Status button click event
void MainWindow::on_GetStatus_clicked()
{
    qDebug() << "Get Status button clicked" << Qt::endl;

    QString path = ui->lineEdit_11->text();

    if(!path.isEmpty())
    {
        gitProcess->setWorkingDirectory(path);
    }

    // Execute git status command
    runGitCommand("git status");
}

// Slot for Get Log button click event
void MainWindow::on_GetLog_clicked()
{
    qDebug() << "Get Log button clicked" << Qt::endl;

    QString path = ui->lineEdit_12->text();
    if(!path.isEmpty())
    {
        gitProcess->setWorkingDirectory(path);
    }

    // Execute git log command
    runGitCommand("git log");
}

// Slot for Back button click event
void MainWindow::on_Back_clicked()
{
    qDebug() << "Back button clicked" << Qt::endl;
    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);

    // Clear input fields and text edits
    ui->textEdit->clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_4->clear();
}

// Slot for second Back button click event
void MainWindow::on_Back_2_clicked()
{
    qDebug() << "Back button clicked" << Qt::endl;
    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);

    // Clear input fields and text edits
    ui->textEdit_3->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_6->clear();
}

// Slot for third Back button click event
void MainWindow::on_Back_3_clicked()
{
    qDebug() << "Back button clicked" << Qt::endl;
    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);

    // Clear input fields and text edits
    ui->textEdit_5->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
}

// Slot for fourth Back button click event
void MainWindow::on_Back_4_clicked()
{
    qDebug() << "Back button clicked" << Qt::endl;
    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);
    ui->textEdit_7->clear();
}

// Slot for fifth Back button click event
void MainWindow::on_Back_5_clicked()
{
    qDebug() << "Back button clicked" << Qt::endl;
    // Enable the first tab and disable all others
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->tabWidget->setTabEnabled(5, false);
    ui->tabWidget->setCurrentIndex(0);
    ui->textEdit_8->clear();
}

// Slot for Clear Output button click event
void MainWindow::on_ClearOutput_clicked()
{
    qDebug() << "Clear Output button clicked" << Qt::endl;
    ui->textEdit->clear();
}

// Slot for second Clear Output button click event
void MainWindow::on_ClearOutput_2_clicked()
{
    qDebug() << "Clear Output button clicked" << Qt::endl;
    ui->textEdit_3->clear();
}

// Slot for third Clear Output button click event
void MainWindow::on_ClearOutput_3_clicked()
{
    qDebug() << "Clear Output button clicked" << Qt::endl;
    ui->textEdit_5->clear();
}

// Slot for Clear Status button click event
void MainWindow::on_ClearStatus_clicked()
{
    qDebug() << "Clear Status button clicked" << Qt::endl;
    ui->textEdit_7->clear();
}

// Slot for Clear Log button click event
void MainWindow::on_ClearLog_clicked()
{
    qDebug() << "Clear Log button clicked" << Qt::endl;
    ui->textEdit_8->clear();
}

// Slot for handling git process error output
void MainWindow::handleError()
{
    qDebug() << "Error occurred:" << Qt::endl;

    QByteArray error = gitProcess->readAllStandardError();
    QString errorString = QString(error);
    qDebug() << "Standard Error: " << errorString;

    // Append error output to the appropriate text edit based on the current tab index
    if (currentTabIndex == 1)
    {
        ui->textEdit->append(errorString);
    }
    else if (currentTabIndex == 2)
    {
        ui->textEdit_3->append(errorString);
    }
    else if (currentTabIndex == 3)
    {
        ui->textEdit_5->append(errorString);
    }
    else if (currentTabIndex == 4)
    {
        ui->textEdit_7->append(errorString);
    }
    else if (currentTabIndex == 5)
    {
        ui->textEdit_8->append(errorString);
    }
}

// Slot for handling git process standard output
void MainWindow::handleOutput()
{
    QByteArray output = gitProcess->readAllStandardOutput();
    QString outputString = QString(output);
    qDebug() << "Standard Output: " << outputString;

    // Append the output to the appropriate text edit based on the current tab index
    if (currentTabIndex == 1)
    {
        ui->textEdit->append(outputString);
    }
    else if (currentTabIndex == 2)
    {
        ui->textEdit_3->append(outputString);
    }
    else if (currentTabIndex == 3)
    {
        ui->textEdit_5->append(outputString);
    }
    else if (currentTabIndex == 4)
    {
        ui->textEdit_7->append(outputString);
    }
    else if (currentTabIndex == 5)
    {
        ui->textEdit_8->append(outputString);
    }
}

// Slot for handling tab changes
void MainWindow::on_tabWidget_currentChanged(int index)
{
    currentTabIndex = index;
}

