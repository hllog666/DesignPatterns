#ifndef DESIGNPATTERNS_TEXT_BUILDER_H
#define DESIGNPATTERNS_TEXT_BUILDER_H

#include <string>
#include "builder.h"

/**
 * ConcreteBuilder：负责实现Builder角色的接口（API）
 */
class TextBuilder : public Builder {
public:
    void MakeTitle(std::string title) override;

    void MakeString(std::string str) override;

    void MakeItems(std::string items[], int len) override;

    void Close() override;

    std::string GetResult();

private:
    std::string buff_;
};


#endif //DESIGNPATTERNS_TEXT_BUILDER_H
