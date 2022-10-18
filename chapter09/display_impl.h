#ifndef DESIGNPATTERNS_DISPLAY_IMPL_H
#define DESIGNPATTERNS_DISPLAY_IMPL_H

/**
 * Implementor：该角色位于类的实现层次结构的最上层。
 * 它定义了用于实现Abstraction角色的接口（API）的方法。
 */
class DisplayImpl {
public:
    virtual void RawOpen() = 0;

    virtual void RawPrint() = 0;

    virtual void RawClose() = 0;
};

#endif //DESIGNPATTERNS_DISPLAY_IMPL_H
