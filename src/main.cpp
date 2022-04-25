#include <iostream>
#include <BigINT.h>
int main()
{
    BigINT::BigINT a, b, c;
    a = 10000000000000ull;
    b = 10000000000000ull;
    a.printself();
    std::cout << std::endl;
    b.printself();
    std::cout << std::endl;
    c = a + b;
    c.printself();
    std::cout << std::endl;
    return 0;
}
