#include "Headers/mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Create a QApplication object to manage application-wide resources

    // Style sheet downloaded from QSS stock (https://qss-stock.devsecstudio.com/)
    QFile styleSheetFile("../../../Style/Darkeum.qss"); // Define a QFile object to read the stylesheet file

    if (!styleSheetFile.open(QIODevice::ReadOnly)) // Check if the stylesheet file can be opened
    {
        qWarning() << "Couldn't open users file."; // Output a warning message if the file couldn't be opened
    }
    QString styleSheet = QLatin1String(styleSheetFile.readAll()); // Read the contents of the stylesheet file into a QString

    a.setStyleSheet(styleSheet); // Set the application's stylesheet using the read stylesheet

    MainWindow w; // Create the main window object

    w.setWindowTitle("Git GUI By Eng. Abdelrahman Mohamed Hamad"); // Set the window title

    QIcon icon("../../../icon/git.ico"); // Define a QIcon object with the path to the icon file
    w.setWindowIcon(icon); // Set the window icon

    w.show(); // Display the main window
    return a.exec(); // Enter the application's event loop
}