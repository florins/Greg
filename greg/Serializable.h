#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H

class DataObject;

class Serializable
{
public:
    virtual void SaveTo(const DataObject& dataObject) = 0;
    virtual void LoadFrom(const DataObject& dataObject) = 0;
};

#endif // SERIALIZABLE_H
