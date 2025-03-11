//
// Created by ilnu on 3/11/25.
//

#ifndef MYSTACK2_H
#define MYSTACK2_H
#include "MyLinkedList.h"


class MyStack2 {
private:
    MyLinkedList* head;

public:
    MyStack2();  // Constructor
    ~MyStack2(); // Destructor

    void push(int val);
    void pop();
    int top() const;
    bool isEmpty() const;
    void printStack() const;
};



#endif //MYSTACK2_H
