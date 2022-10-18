#ifndef DESIGNPATTERNS_TABLE_LINK_H
#define DESIGNPATTERNS_TABLE_LINK_H

#include <string>
#include "link.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class TableLink : public Link {
public:
    explicit TableLink(std::string caption, std::string url) : Link(caption, url) {}

    std::string MakeHtml() override {
        return "<td><a href=\"" + url_ + "\">" + caption_ + "</a></td>\n";
    }
};

#endif //DESIGNPATTERNS_TABLE_LINK_H
