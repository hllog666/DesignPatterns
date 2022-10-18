#ifndef DESIGNPATTERNS_LIST_FACTORY_H
#define DESIGNPATTERNS_LIST_FACTORY_H

#include "factory.h"
#include "link.h"
#include "tray.h"
#include "page.h"
#include "list_link.h"
#include "list_tray.h"
#include "list_page.h"

/**
 * ConcreteFactory:负责实现AbstractFactory角色的接口（API）
 */
class ListFactory : public Factory {
public:
    Link *CreateLink(std::string caption, std::string url) override {
        return new ListLink(caption, url);
    }

    Tray *CreateTray(std::string caption) override {
        return new ListTray(caption);
    }

    Page *CreatePage(std::string title, std::string author) override {
        return new ListPage(title, author);
    }
};

#endif //DESIGNPATTERNS_LIST_FACTORY_H
