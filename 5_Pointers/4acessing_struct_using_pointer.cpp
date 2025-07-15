#include <iostream>
using namespace std;

struct Rectangle {
    int length, breadth;
};

int main() {
    // Static allocation: Creating a rectangle using static memory allocation
    struct Rectangle r1 = {10, 5};
    struct Rectangle *p = &r1;

    // Updating the breadth of the rectangle through the pointer
    p->breadth = 20;

    // Calculating and printing the area of the rectangle using static allocation
    cout << "Static Allocation - Area of Rectangle: " << (r1.length * r1.breadth) << "\n";

    // Dynamic allocation: Creating a rectangle using dynamic memory allocation
    struct Rectangle *p1;
    p1 = new Rectangle;
    p1->length = 5;
    p1->breadth = 4;

    // Calculating and printing the area of the rectangle using dynamic allocation
    cout << "Dynamic Allocation - Area of Rectangle: " << p1->length * p1->breadth << "\n";

    // Printing the size of the pointer variable (not the size of the allocated memory block)
    cout << "Size of the pointer variable: " << sizeof(p1) << "\n";

    // Deallocating the memory allocated through dynamic allocation
    delete p1; 

    return 0;
}
