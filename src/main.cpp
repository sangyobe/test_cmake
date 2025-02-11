#include <iostream>
#include "common.h"

int main(int, char **)
{
    std::cout << "Hello, world!\n";

    std::cout << "2 + 4 = " << add(2, 4) << std::endl;
    std::cout << "2 * 4 = " << mult(2, 4) << std::endl;

    return 0;
}
