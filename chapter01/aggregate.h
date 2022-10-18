#ifndef DESIGNPATTERNS_AGGREGATE_H
#define DESIGNPATTERNS_AGGREGATE_H

/**
 * Aggregate:负责定义创建Iterator角色的接口（API）
 */
class Aggregate {
public:
    virtual Iterator *GetIterator() = 0;
};

#endif //DESIGNPATTERNS_AGGREGATE_H
