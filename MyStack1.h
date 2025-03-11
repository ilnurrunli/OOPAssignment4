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
    void push(int val) {
        data.add(val);
    }

    void pop() {
        data.removeLast();
    }

    int top() {
        return data.get(data.getSize() - 1);
    }

    bool isEmpty() {
        return data.getSize() == 0;
    }

    void printStack() {
        for (int i = data.getSize() - 1; i >= 0; i--) {
            std::cout << data.get(i) << " ";
        }
        std::cout << std::endl;
    }
};


#endif //MYSTACK1_H
