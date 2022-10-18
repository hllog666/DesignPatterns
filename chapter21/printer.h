#ifndef DESIGNPATTERNS_PRINTER_H
#define DESIGNPATTERNS_PRINTER_H

#include <unistd.h>
#include <iostream>
#include <string>
#include "printable.h"

/**
 * RealSubject：在Proxy角色无法胜任工作时出场
 * 实现了在Subject角色中定义的接口
 */
class Printer : public Printable {
public:
    Printer() {
        HeavyJob("正在生成Printer的实例");
    }

    explicit Printer(std::string name) {
        name_ = name;
        HeavyJob("正在生成Printer的实例(" + name_ + ")");
    }

    void SetPrinterName(std::string name) override {
        name_ = name;
    }

    std::string GetPrinterName() override {
        return name_;
    }

    void Print(std::string str) override {
        std::cout << "=== " + name_ + " ===" << std::endl;
        std::cout << str << std::endl;
    }

    void HeavyJob(std::string msg) {
        std::cout << msg;
        for (int i = 0; i < 5; i++) {
            sleep(1);
            std::cout << ".";
        }
        std::cout << "结束。" << std::endl;
    }

private:
    std::string name_;
};

#endif //DESIGNPATTERNS_PRINTER_H
