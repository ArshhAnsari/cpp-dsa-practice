#include <iostream>
using namespace std;

inline int product(int num1, int num2){
    return num1 * num2;
    }
/*
This is a C++ program that demonstrates the use of an inline function.
The program defines an inline function named 'product' that calculates
the product of two integers. It then uses this inline function to calculate
and display the product of two user-input numbers.
*/

/*
Inline functions are used here to optimize the performance of the program
by eliminating the overhead of a function call for a simple computation.
The program prompts the user to input two numbers, calculates their product
using the 'product' inline function, and displays the result multiple times.
*/

int main() {
    int a, b;
    cout << "Enter the value of numbers: " << endl;
    cin >> a >> b;
    // Instead of calling product(a,b) as a separate function call,
    // the compiler may replace it with 'a * b' directly.
    cout << "The product of the numbers are:" << product(a, b)<<endl;
    cout << "The product of the numbers are:" << product(a, b)<<endl;
    cout << "The product of the numbers are:" << product(a, b)<<endl;
    cout << "The product of the numbers are:" << product(a, b)<<endl;

    return 0;
}