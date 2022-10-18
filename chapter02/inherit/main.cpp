#include "print.h"
#include "print_banner.h"

int main() {
    Print *p = new PrintBanner("Hello");
    p->PrintWeak();
    p->PrintStrong();
    return 0;
}