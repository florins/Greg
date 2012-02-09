#include "DObject.h"

DObject::DObject() :
    mObjectID(0)
{
}

DObject::DObject(const QString& objectName) :
    mObjectID(0)
{
}

const QString& DObject::GetName() const
{
    return mName;
}

int DObject::getID() const
{
    return mObjectID;
}
