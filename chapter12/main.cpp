#include "display.h"
#include "string_display.h"
#include "side_border.h"
#include "full_border.h"

int main() {
    Display *d1 = new StringDisplay("Hello, world.");
    Display *d2 = new SideBorder(d1, '#');
    Display *d3 = new FullBorder(d2);
    d1->Show();
    d2->Show();
    d3->Show();
    Display *d4 = new SideBorder(
            new FullBorder(
                    new FullBorder(
                            new SideBorder(
                                    new FullBorder(
                                            new StringDisplay("C++ yyds!")
                                    ), '*'
                            )
                    )
            ), '/'
    );
    d4->Show();
    return 0;
}