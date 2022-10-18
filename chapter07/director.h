#ifndef DESIGNPATTERNS_DIRECTOR_H
#define DESIGNPATTERNS_DIRECTOR_H

#include "builder.h"

/**
 * Director：负责使用Builder角色的接口（API）来生成实例
 */
class Director {
public:
    explicit Director(Builder *builder);

    void Construct();

private:
    Builder *builder_;
};


#endif //DESIGNPATTERNS_DIRECTOR_H
