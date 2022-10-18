#include "display.h"
#include "count_display.h"
#include "string_display_impl.h"

int main() {
    Display *d1 = new Display(new StringDisplayImpl("Hello, China."));
    Display *d2 = new Display(new StringDisplayImpl("Hello, World."));
    CountDisplay *d3 = new CountDisplay(new StringDisplayImpl("Hello, Universe."));
    d1->DisplaySomething();
    d2->DisplaySomething();
    d3->DisplaySomething();
    d3->MultiDisplay(5);
}