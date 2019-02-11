#include "Yolo.h"
#include <iostream>

#include <QString>
#include <QProcess>

// We need to store the location of Yolo somewhere, or just assume that it is in the path
// and use it from there
Yolo::Yolo()
{
}

void Yolo::runYolo(QString command){

    std::cout << "Run Yolo: " << command << std::endl;
    // Create a QProcess
    // Get notified of results, perhaps hook this to a progress bar, or take the results and
    // Stream it to a TextArea to watch
    // When finished, open the resulting file
}

std::ostream& operator<<( std::ostream& out, QString &s ){
    out << s.toStdString();
    return out;
}
