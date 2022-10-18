#ifndef DESIGNPATTERNS_BIG_CHAR_H
#define DESIGNPATTERNS_BIG_CHAR_H

#include <iostream>
#include <fstream>
#include <string>

/**
 * Flyweight：表示实例会被共享的类
 */
class BigChar {
public:
    explicit BigChar(char charName) {
        charName_ = charName;
        std::ifstream ifs;
        ifs.open(std::string("big") + std::string(1, charName_) + ".txt", std::ios::in);
        // std::cout << std::string("big") + std::string(1, charName_) + ".txt" << std::endl;
        if (!ifs.is_open()) {
            std::cout << "open file error" << std::endl;
            exit(1);
        }
        char line[100] = {0};
        std::string buf;
        while (ifs.getline(line, sizeof(line))) {
            buf += line;
            buf += "\n";
        }
        ifs.close();
        fontData_ = buf;
    }

    void Print() {
        std::cout << fontData_;
        std::cout << std::endl;
    }

private:
    char charName_;
    std::string fontData_;
};


#endif //DESIGNPATTERNS_BIG_CHAR_H
