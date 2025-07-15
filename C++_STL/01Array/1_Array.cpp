#include <iostream>
#include <array>

using namespace std;

int main() {
    // Basic C-style array
    int basicArray[3] = {1, 2, 3};
/*
A basic array in C++ is a simple, fixed-size sequence of elements stored in contiguous memory. 
It is essentially a pointer to the first element of the sequence.
There is no built-in functionality for bounds checking, size determination, or other utilities.*/

    // std::array from the <array> library
    array<int, 4> stdArray = {1, 2, 3, 4};
/*
std::array is a wrapper around a basic array, providing a fixed-size array with additional functionality. 
std::array provides several useful member functions, such as .size(), .empty(), .front(), .back(), and .at().
These functions make it safer and easier to work with compared to a basic array.
*/
    // Element Access
    cout << "Element at index 0: " << stdArray.at(0) << endl;  // Safe access
    cout << "Element at index 1: " << stdArray[1] << endl;      // Unsafe access (no bounds checking)
    cout << "First element (front): " << stdArray.front() << endl;
    cout << "Last element (back): " << stdArray.back() << endl;
    cout << "Pointer to underlying array: " << stdArray.data() << endl;

    // Capacity
    cout << "Array size: " << stdArray.size() << endl;
    cout << "Maximum size: " << stdArray.max_size() << endl;
    cout << "Is array empty? " << (stdArray.empty() ? "Yes" : "No") << endl;

    // Modifiers
    stdArray.fill(10);  // Fill the array with 10s
    cout << "Array after fill: ";
    for (int i : stdArray) cout << i << " ";
    cout << endl;

    array<int, 4> anotherArray = {5, 6, 7, 8};
    stdArray.swap(anotherArray);  // Swap contents
    cout << "Array after swap: ";
    for (int i : stdArray) cout << i << " ";
    cout << endl;

    // Relational Operators
    std::array<int, 4> compareArray = {5, 6, 7, 8};
    cout << "Is stdArray == compareArray? " << (stdArray == compareArray ? "Yes" : "No") << endl;
    cout << "Is stdArray != compareArray? " << (stdArray != compareArray ? "Yes" : "No") << endl;
    cout << "Is stdArray < compareArray? " << (stdArray < compareArray ? "Yes" : "No") << endl;
    return 0;
}
