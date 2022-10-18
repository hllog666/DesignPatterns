#ifndef DESIGNPATTERNS_DATABASE_H
#define DESIGNPATTERNS_DATABASE_H

#include <string>
#include <map>
#include "util.h"

/**
 * 构成系统的其他角色：完成自己的工作，并不知道Facade角色
 */
class Database {
public:
    static std::map<std::string, std::string> GetProperties(std::string dbname) {
        std::string filename = dbname + ".txt";
        std::map<std::string, std::string> m;
        Util::LoadProperties(filename, m);
        return m;
    }

private:
    Database() = default;
};

#endif //DESIGNPATTERNS_DATABASE_H
