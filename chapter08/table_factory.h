#ifndef DESIGNPATTERNS_TABLE_FACTORY_H
#define DESIGNPATTERNS_TABLE_FACTORY_H

#include <string>
#include "factory.h"
#include "link.h"
#include "tray.h"
#include "page.h"
#include "table_link.h"
#include "table_tray.h"
#include "table_page.h"

/**
 * ConcreteFactory:负责实现AbstractFactory角色的接口（API）
 */
class TableFactory : public Factory {
public:
    Link *CreateLink(std::string caption, std::string url) override {
        return new TableLink(caption, url);
    }

    Tray *CreateTray(std::string caption) override {
        return new TableTray(caption);
    }

    Page *CreatePage(std::string title, std::string author) override {
        return new TablePage(title, author);
    }
};

#endif //DESIGNPATTERNS_TABLE_FACTORY_H
