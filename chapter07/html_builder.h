#ifndef DESIGNPATTERNS_HTML_BUILDER_H
#define DESIGNPATTERNS_HTML_BUILDER_H

#include <fstream>
#include <string>
#include "builder.h"

/**
 * ConcreteBuilder：负责实现Builder角色的接口（API）
 */
class HtmlBuilder : public Builder {
public:
    void MakeTitle(std::string title) override;

    void MakeString(std::string str) override;

    void MakeItems(std::string items[], int len) override;

    void Close() override;

    std::string GetResult();

private:
    std::string filename_;
    std::ofstream ofs_;
};


#endif //DESIGNPATTERNS_HTML_BUILDER_H
