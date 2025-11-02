// Sum of digits
/*
for 1342==10 //i.e 1+3+4+2=10;
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int sumOfdigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfdigits(n / 10);
    }
}

// Count the number of digits
int countDigits(int n) {
    // 1. Handle negative numbers immediately by using the absolute value
    n = std::abs(n);
    
    // 2. Base Case: If n is a single digit (0-9)
    if (n <= 9) {
        // If n is not zero, it's 1 digit. If n is 0, it's 1 digit.
        return 1; 
    }
    
    // 3. Recursive Step: Return 1 (for the current digit) + the count of the rest of the number
    // n / 10 eliminates the last digit
    return 1 + countDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number to find its sum: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfdigits(num) << endl;
    cout << "Count of digits: " << countDigits(num) << endl;
    /* 
    Recursion Tree:
        countDigits(504)
        |
        = 1 + countDigits(50)
        |
        = 1 + (1 + countDigits(5))
        |
        = 1 + (1 + (1))
        |
        = 3
    */
    return 0;
}
