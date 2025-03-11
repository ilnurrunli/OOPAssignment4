//
// Created by ilnu on 3/11/25.
//

#include "MyVector.h"

MyVector::MyVector() : size(0) {}

void MyVector::add(int val) {
    if (size < 100) {
        arr[size++] = val;
    }
}

int MyVector::get(int index) const {
    if (index >= 0 && index < size) {
        return arr[index];
    }
    return -1;  // Error value
}

void MyVector::removeLast() {
    if (size > 0) {
        size--;
    }
}

int MyVector::getSize() const {
    return size;
}
