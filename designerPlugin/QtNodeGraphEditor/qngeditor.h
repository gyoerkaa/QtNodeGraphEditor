#ifndef QNGEDITOR_H
#define QNGEDITOR_H

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT QngEditor : public QWidget
{
    Q_OBJECT
    
public:
    QngEditor(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
};

#endif
