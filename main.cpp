#include <iostream>
#include "function.h"
#include "variable.h"

int main()
{
    square f(3.0);
    exp_ g(1.0);
    std::cout << "Output: " << g.returnOutput() << std::endl;
    std::cout << "backforward: " << g.backward() << std::endl;

    std::cout << "Output: " << f.returnOutput() << std::endl;
    std::cout << "backforward: " << f.backward() << std::endl;
    return 0;
}