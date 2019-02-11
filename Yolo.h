#ifndef YOLO_H
#define YOLO_H
#include <QString>
#include <QObject>

class Yolo: public QObject
{
    Q_OBJECT
public:
    Yolo();
    virtual ~Yolo(){}

public slots:
    void runYolo(QString command);
};

std::ostream& operator<<( std::ostream& out, QString &s );
#endif // YOLO_H
