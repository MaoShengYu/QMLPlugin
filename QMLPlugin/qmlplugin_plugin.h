#ifndef QMLPLUGIN_PLUGIN_H
#define QMLPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class QMLPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // QMLPLUGIN_PLUGIN_H
