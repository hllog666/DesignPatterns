#ifndef DESIGNPATTERNS_LINK_H
#define DESIGNPATTERNS_LINK_H

#include <string>
#include "item.h"

/**
 * AbstractProduct:负责定义AbstractFactory角色所生成的抽象零件和产品的接口（API）
 */
class Link : public Item {
public:
    Link(std::string caption, std::string url) : Item(caption), url_(url) {
    }

protected:
    std::string url_;
};

#endif //DESIGNPATTERNS_LINK_H
