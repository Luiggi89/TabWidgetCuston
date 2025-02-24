#include "TabWidgetCustomPlugin.h"
#include "TabWidgetCustom.h"

#include <QtPlugin>

TabWidgetCustomPlugin::TabWidgetCustomPlugin(QObject *parent)
    : QObject(parent)
{}

void TabWidgetCustomPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool TabWidgetCustomPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *TabWidgetCustomPlugin::createWidget(QWidget *parent)
{
    return new TabWidgetCustom(parent);
}

QString TabWidgetCustomPlugin::name() const
{
    return QLatin1String("TabWidgetCustom");
}

QString TabWidgetCustomPlugin::group() const
{
    return QLatin1String("Custom Widget");
}

QIcon TabWidgetCustomPlugin::icon() const
{
    return QIcon();
}

QString TabWidgetCustomPlugin::toolTip() const
{
    return QLatin1String("Custom Widget");
}

QString TabWidgetCustomPlugin::whatsThis() const
{
    return QLatin1String("Custom Widget");
}

bool TabWidgetCustomPlugin::isContainer() const
{
    return true;
}

QString TabWidgetCustomPlugin::domXml() const
{
    return QLatin1String(R"(<widget class="TabWidgetCustom" name="tabWidgetCustom">
</widget>)");
}

QString TabWidgetCustomPlugin::includeFile() const
{
    return QLatin1String("TabWidgetCustom.h");
}
