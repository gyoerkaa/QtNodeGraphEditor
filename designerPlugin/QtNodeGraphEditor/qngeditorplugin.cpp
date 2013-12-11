#include "qngeditor.h"
#include "qngeditorplugin.h"

#include <QtPlugin>

qngEditorPlugin::qngEditorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void qngEditorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool qngEditorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *qngEditorPlugin::createWidget(QWidget *parent)
{
    return new qngEditor(parent);
}

QString qngEditorPlugin::name() const
{
    return QLatin1String("qngEditor");
}

QString qngEditorPlugin::group() const
{
    return QLatin1String("");
}

QIcon qngEditorPlugin::icon() const
{
    return QIcon();
}

QString qngEditorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString qngEditorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool qngEditorPlugin::isContainer() const
{
    return false;
}

QString qngEditorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"qngEditor\" name=\"qngEditor\">\n</widget>\n");
}

QString qngEditorPlugin::includeFile() const
{
    return QLatin1String("qngeditor.h");
}

Q_EXPORT_PLUGIN2(qngeditorplugin, qngEditorPlugin)
