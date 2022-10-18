#ifndef DESIGNPATTERNS_ITERATOR_H
#define DESIGNPATTERNS_ITERATOR_H

/**
 * Iterator:负责定义按顺序逐个遍历元素的接口（API）
 */
class Iterator {
public:
    virtual bool HasNext() = 0;

    template<class T>
    T Next();
};

#endif //DESIGNPATTERNS_ITERATOR_H
