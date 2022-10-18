#include <iostream>
#include <fstream>
#include "node.h"
#include "program_node.h"

/**
 * Client：调用TerminalExpression角色和NonTerminalExpression角色
 * @return
 */
int main() {
    std::ifstream ifs;
    ifs.open("program.txt", std::ios::in);
    char text[100];
    while (ifs.getline(text, sizeof(text))) {
        std::cout << "text = \"" << text << "\"" << std::endl;
        Node *node = new ProgramNode();
        node->Parse(new Context(text));
        std::cout << "node = " << node->ToString() << std::endl;
    }
    ifs.close();

    return 0;
}