#include "page_maker.h"

/**
 * Client：负责调用Facade角色
 * @return 程序的运行状态
 */
int main() {
    PageMaker::MakeWelcomePage("hyuki@hyuki.com", "welcome.html");
    return 0;
}