//
// Created by Cyber on 2025/10/23.
//

#ifndef FUNCTION_H
#define FUNCTION_H



#include <iostream>
#include <cmath>
class function{
private:
    float input;
    float output;

public:
    explicit function(float input){
        function::input = input;
        function::output = 0;
    }
    virtual ~function() = default;                                      // 虚析构函数
    virtual void forward() {;}                                          // 前向传播更新 output
    virtual float backward() { return 0.0f;}                            // 反向传播更新 input 的梯度
    [[nodiscard]] float getInput() const { return input; }              // 获取 input
    [[nodiscard]] float returnOutput() const { return output; }         // 获取 output
    void setInput(float input) { function::input = input; }             // 设置 input
    void setOutput(float output) {function::output = output; \
        std::cout << function::output;}                                 // 设置 output
};

class square : public function {
public:
    explicit square(float input) : function(input){
        square::forward();
    }
    void forward() override;
    float backward() override;
};

class exp_ : public function {
public:
    explicit exp_(float input) : function(input){
        exp_::forward();
    }
    void forward() override;
    float backward() override;
};
#endif //FUNCTION_H
