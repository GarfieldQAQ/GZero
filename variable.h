//
// Created by Cyber on 2025/10/23.
//

#ifndef VARIABLE_H
#define VARIABLE_H

#include <string>

class variable{
private:
    float value = 0;
    float grad = 0;
public:
    variable(float value){
        variable::value = value;
    }
};



#endif //VARIABLE_H
