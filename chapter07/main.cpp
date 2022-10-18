#include <iostream>
#include <string>
#include "director.h"
#include "text_builder.h"
#include "html_builder.h"

void Usage() {
    std::cout << "Usage: main plain" << std::endl;
    std::cout << "Usage: main html" << std::endl;
}

/**
 * Client：使用Builder模式
 * @param argc 参数个数
 * @param argv 具体的参数数组
 * @return 程序运行状态
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        Usage();
        exit(1);
    }
    if (std::string("plain").compare(argv[1]) == 0) {
        TextBuilder *textBuilder = new TextBuilder();
        Director *director = new Director(textBuilder);
        director->Construct();
        std::string result = textBuilder->GetResult();
        std::cout << result;
    } else if (std::string("html").compare(argv[1]) == 0) {
        HtmlBuilder *htmlBuilder = new HtmlBuilder();
        Director *director = new Director(htmlBuilder);
        director->Construct();
        std::string filename = htmlBuilder->GetResult();
        std::cout << filename << "文件编写完成" << std::endl;
    } else {
        Usage();
        exit(1);
    }
    return 0;
}