#ifndef GREGPLUGIN_H
#define GREGPLUGIN_H

struct ConfigurationStructure;

class GregPlugin
{
//CONSTRUCTION/DESTRUCTION
public:
    GregPlugin();
    virtual ~GregPlugin();

    virtual void Load();
    virtual void Unload();
    virtual const ConfigurationStructure* GetConfigStructure() const;

protected:
    ConfigurationStructure* mConfigStructure;
};

#endif // GREGPLUGIN_H
