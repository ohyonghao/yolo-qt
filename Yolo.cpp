#include "Yolo.h"
#include <iostream>

#include <QString>

// We need to store the location of Yolo somewhere, or just assume that it is in the path
// and use it from there
Yolo::Yolo()
{
}

void Yolo::runYolo(QString command){

    std::cout << "Run Yolo: " << command << std::endl;
}

std::ostream& operator<<( std::ostream& out, QString &s ){
    out << s.toStdString();
    return out;
}
