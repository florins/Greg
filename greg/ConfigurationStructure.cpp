#include "ConfigurationStructure.h"
#include <QFrame>

ConfigurationStructure::ConfigurationStructure()
    :mConfigFrame(NULL)
{
}

ConfigurationStructure::~ConfigurationStructure()
{
    delete mConfigFrame;
}
