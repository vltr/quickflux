#include <QObject>
#include <QQmlExtensionPlugin>
#include "qfload.h"


class QuickFluxPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char* uri)
    {
        Q_ASSERT(uri == QLatin1String("QuickFlux")); // took from qt examples
        QuickFlux::initialize();
    }
};
