#ifndef DESIGNPATTERNS_BUILDER_H
#define DESIGNPATTERNS_BUILDER_H

#include <string>

/**
 * Builder:负责定义用于生成实例的接口（API）
 */
class Builder {
public:
    virtual void MakeTitle(std::string title) = 0;

    virtual void MakeString(std::string str) = 0;

    virtual void MakeItems(std::string items[], int len) = 0;

    virtual void Close() = 0;
};

#endif //DESIGNPATTERNS_BUILDER_H
