#include <iostream>
#include "printable.h"
#include "printer_proxy.h"

/**
 * 使用Proxy模式的角色
 * @return 程序的运行状态
 */
int main() {
    Printable *p = new PrinterProxy("Alice");
    std::cout << "现在的名字是 " << p->GetPrinterName() << "。" << std::endl;
    p->SetPrinterName("Bob");
    std::cout << "现在的名字是 " << p->GetPrinterName() << "。" << std::endl;
    p->Print("Hello, world.");
    return 0;
}