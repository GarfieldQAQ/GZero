//
// Created by Cyber on 2025/10/23.
//

#ifndef VARIABLE_H
#define VARIABLE_H



class variable{
private:
    float value = 0;
    float grad = 0;
public:
    explicit variable(float value){
        variable::value = value;
    }
    [[nodiscard]]float getValue() const { return this->value; };
    [[nodiscard]]float getGrad() const { return this->grad; };
    void setGrad(float grad){ this->grad = grad; };
    void setValue(float value){ this->value = value; };
};



#endif //VARIABLE_H
