//
// Created by ilnu on 3/11/25.
//

#ifndef MYVECTOR_H
#define MYVECTOR_H



class MyVector {
private:
    int arr[100];
    int size;

public:
    MyVector() : size(0) {}

    void add(int val) {
        if (size < 100) {
            arr[size++] = val;
        }
    }

    int get(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return -1; // Error case
    }

    void removeLast() {
        if (size > 0) {
            size--;
        }
    }

    int getSize() {
        return size;
    }
};



#endif //MYVECTOR_H
