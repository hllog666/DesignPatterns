#ifndef DESIGNPATTERNS_TABLE_PAGE_H
#define DESIGNPATTERNS_TABLE_PAGE_H

#include <string>
#include "page.h"

/**
 * ConcreteProduct：负责实现AbstractProduct角色的接口（API）
 */
class TablePage : public Page {
public:
    explicit TablePage(std::string title, std::string author) : Page(title, author) {}

    std::string MakeHtml() override {
        std::string buff;
        buff += "<html><head><title>" + title_ + "</title></head>\n";
        buff += "<body>\n";
        buff += "<h1>" + title_ + "</h1>\n";
        buff += "<table width=\"80%\" border=\"3\">\n";
        auto it = content_.begin();
        for (; it != content_.end(); it++) {
            Item *item = *it;
            buff += "<tr>" + item->MakeHtml() + "</tr>";
        }
        buff += "</table>\n";
        buff += "<hr><address>" + author_ + "</address>";
        buff += "</body></html>\n";
        return buff;
    }
};

#endif //DESIGNPATTERNS_TABLE_PAGE_H
