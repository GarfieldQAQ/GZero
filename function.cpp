//
// Created by Cyber on 2025/10/23.
//

#include "function.h"

/**
 * @brief  square 类的前向传播函数，实现输入值的平方计算。
 */

void square::forward(){
    float in = getInput();
    float r = in * in;  // avoid pow for simple square (keeps float precision)
    setOutput(r);
}