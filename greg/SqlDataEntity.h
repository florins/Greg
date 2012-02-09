#ifndef SQLDATAENTITY_H
#define SQLDATAENTITY_H

#include "DataEntity.h"

class SqlDataEntity : public DataEntity
{
public:
    SqlDataEntity();
    DataErrEnum Flush();

};

#endif // SQLDATAENTITY_H
