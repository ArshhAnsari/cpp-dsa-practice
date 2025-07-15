// Reference variable and type casting

#include <iostream>
#include <iomanip>  // Library for manipulators
using namespace std;

int main() {
    // Examples of reference variable
    float x = 6.04;
    float &y = x;
    cout << "The value of y is: " << y << endl;
    cout << "The value of x is: " << x << endl;
    cout << "Size of x: " << sizeof(x) << " bytes" << endl;
    cout << "The value of y (cast to int) is: " << int(y) << endl;

    // Uncomment the following code to see the error when trying to modify a constant variable
    /*
    const int a = 5;
    cout << "The value of a is: " << a << endl;
    a = 4;  // Error because 'a' is a constant
    cout << "The value of a is: " << a << endl;
    */

    // Using manipulators to format output
    int t = 2, h = 90, j = 1020;

    cout << "The value of t is: " << t << endl;
    cout << "The value of h is: " << h << endl;
    cout << "The value of j is: " << j << endl;

    cout << "Formatted output with setw:" << endl;
    cout << "t: " << setw(4) << t << endl;
    cout << "h: " << setw(4) << h << endl;
    cout << "j: " << setw(4) << j << endl;

    // setw(4) sets the field width to 4 characters for the next output
    // It aligns the values to the right within the specified width
    return 0;
}
