#include <iostream>
#include "function.h"
#include "variable.h"

int main(){
    square f(3.0);
    f.forward();
    std::cout << "Output: " << f.returnOutput() << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}