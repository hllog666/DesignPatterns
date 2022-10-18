#include "abstract_display.h"
#include "char_display.h"
#include "string_display.h"

int main() {
    AbstractDisplay *d1 = new CharDisplay('H');
    AbstractDisplay *d2 = new StringDisplay("Hello, World.");
    AbstractDisplay *d3 = new StringDisplay("源码之下，了无秘密");
    d1->Display();
    d2->Display();
    d3->Display();
    return 0;
}