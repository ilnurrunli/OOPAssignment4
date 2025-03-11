//
// Created by ilnu on 3/11/25.
//

#ifndef MYVECTOR_H
#define MYVECTOR_H



class MyVector {
    int arr[100];  // Fixed-size array
    int size;      // Number of elements in the vector

public:
    MyVector();  // Constructor

    void add(int val);
    int get(int index) const;
    void removeLast();
    int getSize() const;
};



#endif //MYVECTOR_H
