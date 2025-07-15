#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int[5];

    cout << sizeof(p) << endl; // Size of the pointer itself (4 bytes on a 32-bit system), not the size of the dynamically allocated array on the heap.
    
    cout << "Size of the dynamically allocated array: " << sizeof(int) * 5 << " bytes\n";
            // Output: Size of the dynamically allocated array calculated as the size of one integer multiplied by the number of elements (5).
    
    // Printing the hexadecimal address where the array is allocated
    cout << "Memory address of the dynamically allocated array: " << p << endl;
    
    // Deallocate the memory to avoid memory leaks.
    delete[] p;
    return 0;
}
/*
    In a 32-bit system, a pointer typically takes up 4 bytes regardless of what it points to. 
    This is due to the architecture. When you print sizeof(p), you get the size of the pointer. 
    If you calculate the size of the dynamically allocated array using sizeof(int) * 5, 
    you get the size of the memory block pointed to by the pointer,
    which depends on the size of the array elements (in this case, int).
*/