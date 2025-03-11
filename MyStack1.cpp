//
// Created by ilnu on 3/11/25.
//

#include <iostream>
#include "MyStack1.h"


void MyStack1::push(int val) {
    data.add(val);
}

void MyStack1::pop() {
    data.removeLast();
}

int MyStack1::top() const {
    return data.get(data.getSize() - 1);
}

bool MyStack1::isEmpty() const {
    return data.getSize() == 0;
}

void MyStack1::printStack() const {
    for (int i = data.getSize() - 1; i >= 0; i--) {
        std::cout << data.get(i) << " ";
    }
    std::cout << std::endl;
}