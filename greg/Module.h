#ifndef MODULE_H
#define MODULE_H

#include "Serializable.h"

class Module : public Serializable
{
public:
    Module();

//INTERFACE
    void Serialize();
};

#endif // MODULE_H
