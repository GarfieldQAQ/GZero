#include <iostream>
#include "function.h"
#include "variable.h"

int main()
{
    variable x(3.0);
    square f(x);
    exp_ g(x);
    std::cout << "Output: " << g.returnOutput() << std::endl;
    std::cout << "backforward: " << g.backward(1.0) << std::endl;

    std::cout << "Output: " << f.returnOutput() << std::endl;
    std::cout << "backforward: " << f.backward(1.0) << std::endl;
    return 0;
}