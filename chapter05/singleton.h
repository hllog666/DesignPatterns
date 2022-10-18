#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

#include <iostream>

/**
 * Singleton:含有一个返回唯一实例的静态方法
 */
class Singleton {
public:
    static Singleton *GetInstance() {
        if (singleton_ == nullptr) {
            singleton_ = new Singleton();
        }
        return singleton_;
    }

private:
    Singleton() {
        std::cout << "生成了一个实例" << std::endl;
    }

private:
    static Singleton *singleton_;
};

Singleton *Singleton::singleton_ = nullptr;

#endif //DESIGNPATTERNS_SINGLETON_H
