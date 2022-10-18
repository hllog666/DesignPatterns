#include "manager.h"
#include "message_box.h"
#include "underline_pen.h"

int main() {
    Manager *manager = new Manager();
    UnderlinePen *uPen = new UnderlinePen('~');
    MessageBox *mBox = new MessageBox('*');
    MessageBox *sBox = new MessageBox('/');
    manager->Register("strong message", uPen);
    manager->Register("warning box", mBox);
    manager->Register("slash box", sBox);
    Product *p1 = manager->Create("strong message");
    p1->Use("Hello, world.");
    Product *p2 = manager->Create("warning box");
    p2->Use("Hello, world.");
    Product *p3 = manager->Create("slash box");
    p3->Use("Hello, world.");
    return 0;
}