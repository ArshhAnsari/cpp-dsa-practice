#include <iostream>
using namespace std;

// Function to create an array of numbers on the heap
int *fun(int size){     //In the declaration of the function `int* fun(int size)` , the * is required to indicate that the function returns a pointer to an integer.
/*  The '*' is part of the function's return type, and it signifies that the function returns the memory address of the first element of an array of integers.
    When you call this function, you might assign its result to an integer pointer variable*/
    
    int *p;
    // Allocate memory for an array of 'size' integers on the heap.
    p = new int[size];  // 'new' allocates memory on the heap and returns a pointer to the first element.
    for (int i = 0; i < size;i++)   // Fill the array with numbers from 1 to 'size'

        p[i] = i + 1;

    // Return the address of the first element of the array
    return p;
    }

int main() {
    int *ptr, sz = 5;
    // Call the function 'fun' to create an array of numbers
    // 'ptr' will point to the first element of the dynamically allocated array.

    ptr = fun(sz);

// Print the numbers in the array
    for (int i = 0; i < sz;i++)
        cout << ptr[i] << " ";
    delete[] ptr;
    return 0;
}
/*
Step-by-Step Explanation:
1. Function Declaration (fun):
The function fun takes an integer size as a parameter and returns a pointer to an integer (int*).
Inside fun, a pointer p is declared.
Memory is allocated on the heap for an array of size integers using new int[size]. This allocation returns a pointer to the first element of the array.
A loop initializes the array so that p[0] = 1, p[1] = 2, and so on.
Finally, the function returns the pointer p.

2. Using the Function in main:
In main, we declare a pointer ptr and set the desired size (sz = 5).
We call fun(sz), which returns the address of the dynamically allocated array. This address is stored in ptr.
We then use a loop to print each element of the array by accessing ptr[i].

3. Deallocating Memory:
Since the array was allocated on the heap, it is our responsibility to free that memory when we're done.
delete[] ptr; is used to deallocate the memory. Failing to do so would result in a memory leak.
*/