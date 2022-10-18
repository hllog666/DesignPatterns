#ifndef DESIGNPATTERNS_PRINT_BANNER_H
#define DESIGNPATTERNS_PRINT_BANNER_H

#include <string>
#include "banner.h"
#include "print.h"

class PrintBanner : public Banner, public Print {
public:
    explicit PrintBanner(std::string str);

    void PrintWeak() override;

    void PrintStrong() override;
};


#endif //DESIGNPATTERNS_PRINT_BANNER_H
