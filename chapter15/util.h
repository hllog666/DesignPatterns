#ifndef DESIGNPATTERNS_UTIL_H
#define DESIGNPATTERNS_UTIL_H

#include <string>
#include <map>
#include <vector>
#include <fstream>

class Util {
public:
    static void SplitString(std::string str, std::map<std::string, std::string> &m) {
        int pos = str.find("=");
        m.insert(std::make_pair(str.substr(0, pos), str.substr(pos + 1, str.size())));
    }

    static void LoadProperties(const std::string &filename, std::map<std::string, std::string> &m) {
        std::ifstream ifs;
        ifs.open(filename, std::ios::in);
        if (!ifs.is_open()) {
            std::cout << "open file error" << std::endl;
        }
        char buff[1024] = {0};
        while (ifs.getline(buff, sizeof(buff))) {
            SplitString(buff, m);
        }
    }
};

#endif //DESIGNPATTERNS_UTIL_H
