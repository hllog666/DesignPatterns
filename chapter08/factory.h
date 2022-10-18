#ifndef DESIGNPATTERNS_FACTORY_H
#define DESIGNPATTERNS_FACTORY_H

#include <string>
#include "link.h"
#include "tray.h"
#include "page.h"

/**
 * AbstractFactory：负责定义用于生成抽象产品的接口（API）
 */
class Factory {
public:
    virtual Link *CreateLink(std::string caption, std::string url) = 0;

    virtual Tray *CreateTray(std::string caption) = 0;

    virtual Page *CreatePage(std::string title, std::string author) = 0;
};

#endif //DESIGNPATTERNS_FACTORY_H
