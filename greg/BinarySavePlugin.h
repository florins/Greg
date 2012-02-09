#ifndef BINARYSAVEPLUGIN_H
#define BINARYSAVEPLUGIN_H

#include "GregPlugin.h"

class BinarySavePlugin : public GregPlugin
{
public:
    BinarySavePlugin();
    ~BinarySavePlugin();

    void Load();
    void Unload();
    const ConfigurationStructure* getConfigStructure() const;
};

#endif // BINARYSAVEPLUGIN_H
