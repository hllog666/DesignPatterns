#ifndef DESIGNPATTERNS_TRAY_H
#define DESIGNPATTERNS_TRAY_H

#include <string>
#include <vector>
#include "item.h"

/**
 * AbstractProduct:负责定义AbstractFactory角色所生成的抽象零件和产品的接口（API）
 */
class Tray : public Item {
public:
    explicit Tray(std::string caption) : Item(caption) {}

    void Add(Item *item) {
        tray_.push_back(item);
    }

protected:
    std::vector<Item *> tray_;
};

#endif //DESIGNPATTERNS_TRAY_H
