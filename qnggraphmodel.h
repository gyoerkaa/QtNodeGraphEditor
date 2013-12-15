#ifndef QNGGRAPHMODEL_H
#define QNGGRAPHMODEL_H

#include <QObject>
#include <QHash>

#include "qnggraphnode.h"

class QngGraphModel : public QObject
{
    Q_OBJECT
public:
    explicit QngGraphModel(QObject *parent = 0);
    
signals:
    
public slots:

private:
    QHash<QString, QngGraphNode> hash;
};

#endif // QNGGRAPHMODEL_H
