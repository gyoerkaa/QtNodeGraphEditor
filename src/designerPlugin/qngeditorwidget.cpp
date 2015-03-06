#include "qngeditorwidget.h"

#include <QtGui>

QngEditorWidget::QngEditorWidget(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle(tr("Node graph Editor"));
    resize(200, 200);
}


void QngEditorWidget::paintEvent(QPaintEvent *)
{

}

