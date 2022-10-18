#ifndef DESIGNPATTERNS_VISITOR_H
#define DESIGNPATTERNS_VISITOR_H

// #include "file.h"
// #include "directory.h"

// 解决循环依赖问题
class File;

class Directory;

/**
 * Visitor：负责对数据结构中每个具体的元素（ConcreteElement角色）声明一个访问方法
 */
class Visitor {
public:
    virtual void Visit(File *file) = 0;

    virtual void Visit(Directory *directory) = 0;
};

#endif //DESIGNPATTERNS_VISITOR_H
