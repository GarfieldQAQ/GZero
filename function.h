//
// Created by Cyber on 2025/10/23.
//

#ifndef FUNCTION_H
#define FUNCTION_H



#include "variable.h"

class function{
private:
    float input;
    variable output;

public:
    explicit function(variable input) : output(0.0f) {
        this->input = input.getValue();
    }
    virtual ~function() = default;                                          // 虚析构函数
    virtual void forward() {;}                                              // 前向传播更新 output
    virtual float backward(float lastGrad) { return 0.0f;}                  // 反向传播更新 input 的梯度
    [[nodiscard]] float getInput() const { return input; }                  // 获取 input
    [[nodiscard]] variable returnOutput() const { return output; }          // 获取 output
    void setInput(float input) { function::input = input; }                 // 设置 input
    void setOutput(float output) {function::output.setValue(output); }      // 设置 output
};

class square : public function {
public:
    explicit square(variable input) : function(input){
        square::forward();
    }
    void forward() override;                                            // square 前向传播
    float backward(float lastGrad) override;                                          // square 反向传播
};

class exp_ : public function {
public:
    explicit exp_(variable input) : function(input){
        exp_::forward();
    }
    void forward() override;
    float backward(float lastGrad) override;
};


#endif //FUNCTION_H
