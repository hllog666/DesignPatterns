#include "big_char.h"
#include "big_char_factory.h"
#include "big_string.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "Usage: main digits";
        std::cout << "Example: main 1212123";
        exit(1);
    }
    std::cout << argv[1] << std::endl;
    BigString *bs = new BigString(argv[1]);
    bs->Print();
    return 0;
}