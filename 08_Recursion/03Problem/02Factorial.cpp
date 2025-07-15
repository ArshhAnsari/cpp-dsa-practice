#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of an integer
int valueoffactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        // Multiply the current number with the factorial of (n-1)
        // Note: Potential overflow for large values of n
        return n * valueoffactorial(n - 1);
    }
}

// Recursive function to calculate the factorial of a double
double valueOfHigherFact(double n) {
    if (n == 0) {
        return 1;
    } else {
        // Multiply the current number with the factorial of (n-1)
        return n * valueOfHigherFact(n - 1);
    }
}

int main() {
    // Iterative method to calculate factorial of an integer
    int num;
    cout << "->Enter the number to find its Factorial: ";
    cin >> num;
    int factorial = 1;
    if (num == 0||num == 1) {
        cout << "->Entered number's factorial is: " << 1 << endl;
    } else {
        for (int i = 2; i <= num; i++) {
            factorial = factorial * i;
        }
        cout << "->The Factorial of the given number " << num << " is: " << factorial << endl;
    }

    // Recursive method to calculate factorial of an integer
    int a;
    cout << "->Enter the number to find its Factorial using recursion: ";
    cin >> a;
    // Factorial of 10 ot above will overflow int
    cout << "->The factorial of the entered number " << a << " is " << valueoffactorial(a) << endl;

    // Recursive method to calculate factorial of a double
    double number = a;
    double result = valueOfHigherFact(number);
    cout << "->Factorial of " << number << " is: " << result << endl;

    // Comments on the difference between the two factorial functions
    /*
    When calculating factorials, the result grows rapidly as the input increases. 
    The issue with using int for factorials is that it has a limited range, and once the result exceeds 
    the maximum positive value (2147483647), it will overflow, leading to incorrect results.
    
    The factorial of 10 exceeds the maximum positive value of int, causing an overflow and resulting 
    in a negative value. To handle larger factorials without overflow, you might consider using 
    a larger integer type like long long or using a more advanced arbitrary-precision arithmetic library 
    if extremely large factorials are needed. The use of double for factorials introduces the capability 
    to represent fractional or non-integer values but comes with its own limitations due to 
    the precision of floating-point numbers.

    */

    return 0;
}
