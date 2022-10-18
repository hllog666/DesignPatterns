#ifndef DESIGNPATTERNS_LIST_PAGE_H
#define DESIGNPATTERNS_LIST_PAGE_H

#include <string>
#include "page.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class ListPage : public Page {
public:
    explicit ListPage(std::string title, std::string author) : Page(title, author) {}

    std::string MakeHtml() override {
        std::string buffer;
        buffer += "<html><head><title>" + title_ + "</title></head>\n";
        buffer += "<body>\n";
        buffer += "<h1>" + title_ + "</h1>\n";
        buffer += "<ul>\n";
        auto it = content_.begin();
        for (; it != content_.end(); it++) {
            Item *item = *it;
            buffer += item->MakeHtml();
        }
        buffer += "</ul>\n";
        buffer += "<hr><address>" + author_ + "</address>";
        buffer += "</body></html>\n";
        return buffer;
    }
};

#endif //DESIGNPATTERNS_LIST_PAGE_H
