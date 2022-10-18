#include "print.h"
#include "print_banner.h"

/**
 * Client:负责使用Target角色所定义的方法进行具体处理
 * @return 程序的退出状态
 */
int main() {
    Print *p = new PrintBanner("Hello");
    p->PrintWeak();
    p->PrintStrong();
    return 0;
}