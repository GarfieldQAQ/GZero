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

/**
 * @brief  square 类的反向传播函数。
 */
float square::backward(){
    return 2 * getInput();
}

/**
 * @brief  exp 类的前向传播函数。
 */
void exp_::forward(){
    float in = getInput();
    float r = std::exp(in);
    setOutput(r);
}

/**
 * @brief  exp 类的反向传播函数。
 */
float exp_::backward(){
    return std::exp(getInput());
}

