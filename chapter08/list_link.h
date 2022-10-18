#ifndef DESIGNPATTERNS_LIST_LINK_H
#define DESIGNPATTERNS_LIST_LINK_H

#include <string>
#include "link.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class ListLink : public Link {
public:
    explicit ListLink(std::string caption, std::string url) : Link(caption, url) {}

    std::string MakeHtml() override {
        return "<li><a href=\">" + url_ + "\">" + caption_ + "</a></li>\n";
    }
};

#endif //DESIGNPATTERNS_LIST_LINK_H
