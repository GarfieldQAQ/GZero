//
// Created by Cyber on 2025/10/23.
//

#ifndef FUNCTION_H
#define FUNCTION_H

#include <vector>
#include <cmath>

class function{
private:
    float input;
    float output;

public:
    function(float input){
        function::input = input;
        function::forward();
    }

    virtual void forward() {;}                                          // 前向传播更新 output
    float getInput() { return input; }                                  // 获取 input
    float returnOutput() { return output; }                             // 获取 output
    void setInput(float input) { function::input = input; }             // 设置 input
    void setOutput(float output) {function::output = output; }          // 设置 output
};

class square : public function {
public:
    using function::function;
    void forward() override;
};
#endif //FUNCTION_H
