#ifndef DESIGNPATTERNS_PRINTABLE_H
#define DESIGNPATTERNS_PRINTABLE_H

#include <string>

/**
 * Subject:定义了使Proxy角色和RealSubject角色之间具有一致性的接口
 * 由于Subject角色的存在，Client角色不必在意他使用的是Proxy角色还是RealSubject角色
 */
class Printable {
public:
    virtual void SetPrinterName(std::string name) = 0;

    virtual std::string GetPrinterName() = 0;

    virtual void Print(std::string str) = 0;
};

#endif //DESIGNPATTERNS_PRINTABLE_H
