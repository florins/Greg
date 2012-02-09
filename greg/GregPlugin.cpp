#include "GregPlugin.h"
#include "ConfigurationStructure.h"

GregPlugin::GregPlugin()
{
}

GregPlugin::~GregPlugin()
{
}

void GregPlugin::Load()
{

}

void GregPlugin::Unload()
{

}

const ConfigurationStructure* GregPlugin::GetConfigStructure() const
{
    return mConfigStructure;
}
