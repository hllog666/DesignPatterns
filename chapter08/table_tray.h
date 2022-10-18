#ifndef DESIGNPATTERNS_TABLE_TRAY_H
#define DESIGNPATTERNS_TABLE_TRAY_H

#include <string>
#include "tray.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class TableTray : public Tray {
public:
    explicit TableTray(std::string caption) : Tray(caption) {}

    std::string MakeHtml() override {
        std::string buffer;
        buffer += "<td>";
        buffer += "<table width=\"100%\" border=\"1\"><tr>";
        buffer += "<td bgcolor=\"#cccccc\" align=\"center\" colspan=\"" +
                  std::to_string(tray_.size()) + "\"><b>" + caption_ + "</b></td>";
        buffer += "</tr>\n";
        buffer += "<tr>\n";
        auto it = tray_.begin();
        for (; it != tray_.end(); it++) {
            Item *item = *it;
            buffer += item->MakeHtml();
        }
        buffer += "</tr></table>";
        buffer += "</td>";
        return buffer;
    }
};

#endif //DESIGNPATTERNS_TABLE_TRAY_H
