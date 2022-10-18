#ifndef DESIGNPATTERNS_PRINTER_PROXY_H
#define DESIGNPATTERNS_PRINTER_PROXY_H

#include <string>
#include "printable.h"
#include "printer.h"

/**
 * Proxy：尽量处理来自Client角色的请求。只有当自己不能处理时，才会将工作交给RealSubject角色
 * 实现了在Subject角色中定义的接口
 */
class PrinterProxy : public Printable {
public:
    PrinterProxy() = default;

    explicit PrinterProxy(std::string name) {
        name_ = name;
    }

    void SetPrinterName(std::string name) override {
        if (real_ != nullptr) {
            real_->SetPrinterName(name);
        }
        name_ = name;
    }

    std::string GetPrinterName() override {
        return name_;
    }

    void Print(std::string str) override {
        Realize();
        real_->Print(str);
    }

private:
    void Realize() {
        if (real_ == nullptr) {
            real_ = new Printer(name_);
        }
    }

private:
    std::string name_;
    Printer *real_;
};

#endif //DESIGNPATTERNS_PRINTER_PROXY_H
