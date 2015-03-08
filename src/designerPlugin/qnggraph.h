#ifndef QNGGRAPH_H
#define QNGGRAPH_H

#include "qngnode.h"
#include <QMap>

class QngGraph
{
public:
    QngGraph();

    QMap<QString, QngNode> *graph;

};

#endif // QNGGRAPH_H
