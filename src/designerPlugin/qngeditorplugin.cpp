#include "qngeditorplugin.h"

#include "qngeditorwidget.h"
#include <QtPlugin>

QngEditorPlugin::QngEditorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QngEditorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool QngEditorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QngEditorPlugin::createWidget(QWidget *parent)
{
    return new QngEditorWidget(parent);
}

QString QngEditorPlugin::name() const
{
    return QLatin1String("Qt Node Graph Editor");
}

QString QngEditorPlugin::group() const
{
    return QLatin1String("");
}

QIcon QngEditorPlugin::icon() const
{
    return QIcon();
}

QString QngEditorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString QngEditorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool QngEditorPlugin::isContainer() const
{
    return false;
}

QString QngEditorPlugin::domXml() const
{
    //return QLatin1String("<widget class=\"qngEditor\" name=\"qngEditor\">\n</widget>\n");
    return "<ui language=\"c++\">\n"
           " <widget class=\"NodeGraphEditor\" name=\"nodeGraphEditor\">\n"
           "  <property name=\"geometry\">\n"
           "   <rect>\n"
           "    <x>0</x>\n"
           "    <y>0</y>\n"
           "    <width>100</width>\n"
           "    <height>100</height>\n"
           "   </rect>\n"
           "  </property>\n"
           "  <property name=\"toolTip\" >\n"
           "   <string>The current time</string>\n"
           "  </property>\n"
           "  <property name=\"whatsThis\" >\n"
           "   <string>TODO: Add a whatsThis description</string>\n"
           "  </property>\n"
           " </widget>\n"
           "</ui>\n";
}

QString QngEditorPlugin::includeFile() const
{
    return QLatin1String("qngeditorwidget.h");
}
