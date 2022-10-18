#ifndef DESIGNPATTERNS_PAGE_MAKER_H
#define DESIGNPATTERNS_PAGE_MAKER_H

#include <map>
#include <string>
#include <iostream>
#include "database.h"
#include "html_writer.h"

/**
 * Facade:代表构成系统的许多其他角色的简单窗口
 * Facade角色向系统外部提供高层接口（API）
 */
class PageMaker {
public:
    static void MakeWelcomePage(std::string mailAddr, std::string filename) {
        std::map<std::string, std::string> mailProp = Database::GetProperties("maildata");
        std::string username = mailProp[mailAddr];
        HtmlWriter *writer = new HtmlWriter(filename);
        writer->Title("Welcome to " + username + "'s page!");
        writer->Paragraph("欢迎来到" + username + "的主页");
        writer->Paragraph("等着你的邮件哦！");
        writer->Mailto(mailAddr, username);
        writer->Close();
        std::cout << filename << " is created for " << mailAddr << " (" << username << ")" << std::endl;
    }

private:
    PageMaker() = default;
};

#endif //DESIGNPATTERNS_PAGE_MAKER_H
