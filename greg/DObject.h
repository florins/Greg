#ifndef DOBJECT_H
#define DOBJECT_H

#include <QString>
#include "Serializable.h"


class DObject : public Serializable
{
public:
    DObject();
    DObject(const QString& objectName);
    virtual const QString& GetName() const;
    virtual int getID() const;

//SERIALIZABLE
    void Serialize();

private:
    int mObjectID;
    QString mName;
};

#endif // DOBJECT_H
