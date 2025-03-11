//
// Created by ilnu on 3/11/25.
//

#ifndef MYSTACK2_H
#define MYSTACK2_H
#include "MyLinkedList.h"
#include <iostream>


class MyStack2 {
private:
    MyLinkedList* head;

public:
    MyStack2() : head(nullptr) {}

    ~MyStack2() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int val) {
        MyLinkedList* newNode = new MyLinkedList(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head) {
            MyLinkedList* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int top() {
        return head ? head->val : -1; // Error case
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void printStack() {
        MyLinkedList* temp = head;
        while (temp) {
            std::cout << temp->val << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};




#endif //MYSTACK2_H
