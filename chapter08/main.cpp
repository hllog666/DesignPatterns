#include <iostream>
#include <string>
#include "link.h"
#include "tray.h"
#include "page.h"
#include "factory.h"
#include "list_factory.h"
#include "table_factory.h"

void Usage() {
    std::cout << "Usage: main ConcreteFactory" << std::endl;
    std::cout << "Example 1: main ListFactory" << std::endl;
    std::cout << "Example 2: main TableFactory" << std::endl;
}

/**
 * Client：调用AbstractFactory角色和AbstractProduct角色的接口（API）来进行工作
 * 对于具体的零件、产品和工厂一无所知
 * @param argc 参数个数
 * @param argv 具体地参数数组
 * @return 程序的运行状态
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        Usage();
        exit(1);
    }
    Factory *factory = nullptr;
    if (std::string("ListFactory").compare(argv[1]) == 0) {
        factory = new ListFactory();
    } else if (std::string("TableFactory").compare(argv[1]) == 0) {
        factory = new TableFactory();
    } else {
        Usage();
        exit(1);
    }
    Link *people = factory->CreateLink("人民日报", "https://www.people.com.cn/");
    Link *gmw = factory->CreateLink("光明日报", "https://www.gmw.cn/");
    Link *usYahoo = factory->CreateLink("Yahoo!", "https://www.yahoo.com/");
    Link *jpYahoo = factory->CreateLink("Yahoo! Japan", "https://www.yahoo.co.jp/");
    Link *excite = factory->CreateLink("Excite", "https://www.excite.com/");
    Link *google = factory->CreateLink("Google", "https://www/google.com/");
    Tray *trayNews = factory->CreateTray("日报");
    trayNews->Add(people);
    trayNews->Add(gmw);
    Tray *trayYahoo = factory->CreateTray("Yahoo!");
    trayYahoo->Add(usYahoo);
    trayYahoo->Add(jpYahoo);
    Tray *traySearch = factory->CreateTray("检索引擎");
    traySearch->Add(trayYahoo);
    traySearch->Add(excite);
    traySearch->Add(google);
    Page *page = factory->CreatePage("LinkPage", "杨文选");
    page->Add(trayNews);
    page->Add(traySearch);
    page->Output();
    return 0;
}