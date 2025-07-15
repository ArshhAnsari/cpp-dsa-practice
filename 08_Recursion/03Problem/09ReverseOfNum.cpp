#include <iostream>
using namespace std;

int sum = 0;

// Global-variable based reverse function
int reverse_no(int n) {
    if (n == 0) {
        return 0;  // base case: nothing to reverse
    }
    int remainder = n % 10;          // extract last digit
    sum = sum * 10 + remainder;      // build reversed number in global sum
    reverse_no(n / 10);              // recursive call with remaining digits
    return sum;                      // return final reversed number
}

// Pure recursive version with accumulator (tail recursion)
int reverse(int n, int rev = 0) {
    if (n == 0)
        return rev;                // base case: return the accumulated result
    int last_digit = n % 10;       // extract last digit
    rev = (rev * 10) + last_digit; // update the reversed number
    return reverse(n / 10, rev);   // recursive call with updated rev
}

/*
// Helper function for pure recursive approach
int reverseHelper(int n, int rev) {
    if (n == 0)
        return rev;  // base case: reversed number is complete
    int last_digit = n % 10;              // get the last digit
    rev = (rev * 10) + last_digit;        // build the reversed number
    return reverseHelper(n / 10, rev);    // recursive call with updated rev
}

// Main function that calls the helper
int reverse(int n) {
    return reverseHelper(n, 0);  // start with rev = 0
}

*/

int main() {
    int n;
    cout << "Enter the number to reverse:";
    cin >> n;

    // Method 1: using global variable
    cout << "Reverse using global sum: " << reverse_no(n) << "\n";

    // Reset global sum for consistent results
    sum = 0;

    // Method 2: using functional tail-recursion
    cout << "Reverse using tail recursion: " << reverse(n) << "\n";

    // Method 3: using helper function
    // cout<<reverse(n);
    return 0;
}
