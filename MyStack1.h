//
// Created by ilnu on 3/11/25.
//

#ifndef MYSTACK1_H
#define MYSTACK1_H
#include "MyVector.h"


class MyStack1 {
private:
    MyVector data;

public:
    void push(int val);
    void pop();
    int top() const;
    bool isEmpty() const;
    void printStack() const;
};



#endif //MYSTACK1_H
