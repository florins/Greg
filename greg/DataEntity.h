#ifndef DATAOBJECT_H
#define DATAOBJECT_H

typedef enum
{
    DataErrEnum_OK,
    DataErrEnum_ERROR
} DataErrEnum;

class DataEntity
{
public:
    DataEntity();
    virtual DataErrEnum Flush() = 0;
};

#endif // DATAOBJECT_H
