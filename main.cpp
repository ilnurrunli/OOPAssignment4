#include <iostream>
#include "MyStack1.h"
#include "MyStack2.h"

int main() {
    MyStack1 s1;
    MyStack2 s2;
    int num;

    std::cout << "Enter values (use -1 for backspace, -99 to stop): ";
    while (true) {
        std::cin >> num;
        if (num == -99) break; // Stop input

        if (num == -1) { // Handle backspace
            if (!s1.isEmpty()) s1.pop();
            if (!s2.isEmpty()) s2.pop();
        } else {
            s1.push(num);
            s2.push(num);
        }
    }

    // Output results from both stacks
    std::cout << "MyStack1: ";
    s1.printStack();
    std::cout << "MyStack2: ";
    s2.printStack();

    return 0;
}
