#ifndef DESIGNPATTERNS_LIST_TRAY_H
#define DESIGNPATTERNS_LIST_TRAY_H

#include <string>
#include "tray.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class ListTray : public Tray {
public:
    explicit ListTray(std::string caption) : Tray(caption) {}

    std::string MakeHtml() override {
        std::string buffer;
        buffer += "<li>\n";
        buffer += caption_ + "\n";
        buffer += "<ul>\n";
        auto it = tray_.begin();
        for (; it != tray_.end(); it++) {
            Item *item = *it;
            buffer += item->MakeHtml();
        }
        buffer += "</ul>\n";
        buffer += "</li>\n";
        return buffer;
    }
};

#endif //DESIGNPATTERNS_LIST_TRAY_H
