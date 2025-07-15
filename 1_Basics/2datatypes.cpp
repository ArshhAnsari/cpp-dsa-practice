#include<iostream>
using namespace std;

int glo = 19;  // Global variable

void sum() {
    cout << glo << endl;
}

int main() {
    int glo = 5;  // Local variable, shadows the global variable 'glo'
    glo = 4;      // Updating the local variable; it takes precedence in this scope
    sum();        // Calling the sum function, which prints the global variable 'glo'
    cout << glo << endl;  // Printing the local variable 'glo' in the main function
    
    int a = 10;
    cout << "The value of a is: " << a << endl;

    float f1 = 3.233;
    cout << "The value of f1 is: " << f1 << endl;

    cout << "The value of global variable is: " << ::glo << endl; // Using scope resolution operator (::) to access the global variable in a local function
    
    /* -------------------------------------------------------- */

    string str, ch;
    
    // Using getline() to input a line with spaces
    cout << "Enter a string using getline(): ";
    getline(cin, str);
    
    cout << "The entered string with getline(): " << str << endl;

    // Using cin to input a single word or a string without spaces
    cout << "Enter a string without spaces: ";
    cin >> ch;
    cout << "The entered string without getline(): " << ch;

    return 0;
}
