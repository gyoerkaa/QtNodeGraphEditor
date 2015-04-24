#ifndef QNGNODE_H
#define QNGNODE_H

#include <QMap>
#include <QVariant>

class QngNode
{
public:
    QngNode();

private:
    QMap<QString, QVariant> *properties;

};

#endif // QNGNODE_H
