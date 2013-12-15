#include "qnggraphnode.h"
#include <QString>
#include <QVariant>


QngGraphNode::QngGraphNode(QString id, QObject *parent) :
    QObject(parent)
{
}

/*
QVariant QngGraphNode::getProperty(QString propertyId) const
{
    QVariant dummy(tr("dummyProperty"));
    return dummy;
}


void QngGraphNode::setProperty(QString propertyId, QVariant value)
{

}*/


QString QngGraphNode::getId() const
{
    return this->nodeId;
}


void QngGraphNode::setId(QString id)
{
    this->nodeId = id;
}
