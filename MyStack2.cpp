//
// Created by ilnu on 3/11/25.
//
#include <iostream>
#include "MyStack2.h"

MyStack2::MyStack2() : head(nullptr) {}

MyStack2::~MyStack2() {
    while (head) {
        pop();
    }
}

void MyStack2::push(int val) {
    MyLinkedList* newNode = new MyLinkedList(val);
    newNode->next = head;
    head = newNode;
}

void MyStack2::pop() {
    if (head) {
        MyLinkedList* temp = head;
        head = head->next;
        delete temp;
    }
}

int MyStack2::top() const {
    return head ? head->val : -1; // Return -1 if empty
}

bool MyStack2::isEmpty() const {
    return head == nullptr;
}

void MyStack2::printStack() const {
    MyLinkedList* current = head;
    while (current) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

