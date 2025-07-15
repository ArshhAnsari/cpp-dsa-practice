#include <iostream>
using namespace std;

/*
    What is a pointer?
    -> A pointer is a special variable that stores the address of another variable.
*/

int main() {
    int a = 5;

    // Create a pointer 'ptr' that holds the address of variable 'a'
    int* ptr = &a;

    // Print the value stored in ptr (which is the address of 'a')
    cout << "1. Value stored in ptr (address of a): " << ptr << endl;

    // Print the actual address of variable 'a'
    cout << "2. Address of variable a: " << &a << endl;

    // Print the address of pointer variable 'ptr'
    cout << "3. Address of ptr itself: " << &ptr << endl;

    // Print the value pointed to by ptr (i.e., value of 'a')
    cout << "4. Value at address stored in ptr (value of a): " << *ptr << endl;

    // Equivalent way to get the value of 'a' using &a
    cout << "5. Value at address of a directly using *(&a): " << *(&a) << "\n";

    cout << "----------" << "\n";

    // Pointer to a pointer: ptr2 holds the address of ptr
    int** ptr2 = &ptr;

    // Print the value stored in ptr2 (address of ptr)
    cout << "6. Value stored in ptr2 (address of ptr): " << ptr2 << endl;

    // Print the value at the address stored in ptr2 (which is the value of ptr, i.e., address of a)
    cout << "7. Value at ptr2 (value stored in ptr): " << *ptr2 << endl;

    // Print the value at the final dereferenced pointer (i.e., value of a)
    cout << "8. Value at address pointed by ptr2 (value of a): " << **ptr2 << "\n";

    cout << "----------" << "\n";

    // Null Pointer
    int* ptr3 = NULL;

    // Print null pointer value
    cout << "9. Value of null pointer ptr3: " << ptr3 << endl;

    // Safe check before dereferencing null pointer
    if (ptr3 == NULL) {
        cout << "10. ptr3 is NULL, cannot dereference it!" << endl;
    } else {
        cout << "10. Value at ptr3: " << *ptr3 << endl;
    }

    return 0;
}
