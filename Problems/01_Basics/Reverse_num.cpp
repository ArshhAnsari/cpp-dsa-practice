#include <iostream>
#include <climits>
using namespace std;

int reverse_number(int n) {
    // Reverses the digits of the given number 'n'.
    // Returns 0 if overflow happens during the reversal.

    int ans = 0;
    while (n != 0) {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
    // Reasoning: We changed 'n > 0' to 'n != 0' for a smoother flip of both positive and negative numbers.
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int result = reverse_number(num);
    cout << result;
    return 0;
}
/*
With (n > 0), the loop would continue as long as n is positive, leading to incorrect behavior for negative input. 
For example, if the input is -123, the loop would terminate prematurely because -123 > 0 is false.
By changing the condition to (n != 0), the loop continues as long as n is not zero, which is what we want. 
It ensures that the loop iterates until all digits of the input number are processed, regardless of whether the number is positive or negative.

Here's a breakdown of how it works:

When the input is negative, like -123:

The loop extracts the last digit (-3), updates the reversed number, and divides n by 10.
The loop continues for the next digit (-2) and so on.
It stops only when n becomes zero after all digits are processed.
When the input is positive, like 123:

The loop behaves the same way, extracting digits, updating the reversed number, and dividing n by 10.
It stops when n becomes zero after processing all digits.
So, n != 0 ensures that the loop continues until all digits are processed, making the reversal process 
work correctly for both positive and negative numbers.
*/