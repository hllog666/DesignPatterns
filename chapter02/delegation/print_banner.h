#ifndef DESIGNPATTERNS_PRINT_BANNER_H
#define DESIGNPATTERNS_PRINT_BANNER_H

#include <string>
#include "print.h"
#include "banner.h"

/**
 * Adapter:使用Adaptee角色的方法来满足Target角色的需求
 */
class PrintBanner : public Print {
public:
    explicit PrintBanner(std::string str);

    ~PrintBanner();

    void PrintWeak() override;

    void PrintStrong() override;

private:
    Banner *banner_;
};


#endif //DESIGNPATTERNS_PRINT_BANNER_H
