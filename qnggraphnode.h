#ifndef QNGNODE_H
#define QNGNODE_H

#include <QObject>

class QString;
class QVariant;

class QngGraphNode : public QObject
{
    Q_OBJECT
public:
    explicit QngGraphNode(QString id, QObject *parent = 0);

    virtual QVariant getProperty(QString propertyId) const = 0;
    virtual void     setProperty(QString propertyId, QVariant value) = 0;
    QString getId() const;
    void setId(QString id);
signals:
    
public slots:

private:
    QString nodeId;
};

#endif // QNGNODE_H
