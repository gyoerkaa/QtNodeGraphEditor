#ifndef QNGEDITORWIDGET_H
#define QNGEDITORWIDGET_H

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT QngEditorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QngEditorWidget(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:


};

#endif // QNGEDITORWIDGET_H
