#include <iostream>
#include "directory.h"
#include "file.h"
#include "list_visitor.h"

int main() {
    std::cout << "Making root entries..." << std::endl;
    Directory *rootDir = new Directory("root");
    Directory *binDir = new Directory("bin");
    Directory *tmpDir = new Directory("tmp");
    Directory *usrDir = new Directory("usr");
    rootDir->Add(binDir);
    rootDir->Add(tmpDir);
    rootDir->Add(usrDir);
    binDir->Add(new File("vi", 10000));
    binDir->Add(new File("latex", 20000));
    rootDir->Accept(new ListVisitor());
    std::cout << std::endl;

    std::cout << "Making user entries..." << std::endl;
    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");
    usrDir->Add(yuki);
    usrDir->Add(hanako);
    usrDir->Add(tomura);
    yuki->Add(new File("diary.html", 100));
    yuki->Add(new File("Composite.java", 200));
    hanako->Add(new File("memo.tex", 400));
    tomura->Add(new File("game.doc", 400));
    tomura->Add(new File("junk.mail", 500));
    rootDir->Accept(new ListVisitor());
    return 0;
}