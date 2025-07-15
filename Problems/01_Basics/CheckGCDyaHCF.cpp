#include <iostream>
using namespace std;

// Brute-force method to find the GCD
void gcd_brute(int n1, int n2) {
    int Greatest_Common_Divisor = 1;
    int smaller = (n1 < n2) ? n1 : n2;
/* 
When calculating the Greatest Common Divisor (GCD), we only need to check 
up to the smaller of the two numbers, n1 or n2. This is because the GCD 
cannot be larger than the smaller of the two numbers. If one of the numbers 
is a divisor of the other, the GCD will either be that smaller number or 
something less than it.
For example:
If n1 = 24 and n2 = 18, the largest possible GCD between them can be no 
larger than 18 (the smaller of the two numbers). There's no point in 
checking numbers larger than 18 because they can't divide both n1 and n2 
without exceeding the smaller number (n2 in this case).
*/
    for (int i = 2; i <= smaller; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            Greatest_Common_Divisor = i;
        }
    }

    cout << "Greatest Common Divisor (Brute-force): " << Greatest_Common_Divisor << endl;
}

// Efficient method using Euclid's Algorithm to find the GCD
int gcd_euclid(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return (a == 0) ? b : a;
}

int main() {
    int n1, n2;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    // gcd_brute(n1, n2);

    // Using Euclid's Algorithm to find GCD
    cout << "Greatest Common Divisor (Euclid's Algorithm): " << gcd_euclid(n1, n2) << endl;

    return 0;
}
/*

Certainly! Let’s start with the formula `GCD(a, b) = GCD(a - b, b)` where `a > b`, and then I'll explain the concept in detail.

 Explanation of `GCD(a, b) = GCD(a - b, b)`

1. Understanding the Formula:
   - Formula: `GCD(a, b) = GCD(a - b, b)` where `a > b`.
   - Meaning: The greatest common divisor of `a` and `b` is the same as the greatest common divisor of `(a - b)` and `b`.

2. Why This Formula Works:
   - Divisibility Property: If `d` is a divisor of both `a` and `b`, then it must also be a divisor of `a - b`. This is because if `d` divides both `a` and `b`, then `a = k1 * d` and `b = k2 * d` for some integers `k1` and `k2`. Thus, `a - b = (k1 - k2) * d`, showing that `d` divides `a - b` as well.
   - Iterative Process: By replacing `a` with `a - b`, we are essentially reducing the problem to a smaller pair of numbers without changing the GCD.

3. Example:
   - Find GCD of 48 and 18:
     - Start with `a = 48` and `b = 18`.
     - Apply the formula: `GCD(48, 18) = GCD(48 - 18, 18) = GCD(30, 18)`.
     - Repeat: `GCD(30, 18) = GCD(30 - 18, 18) = GCD(12, 18)`.
     - Repeat again: `GCD(12, 18) = GCD(12, 18 - 12) = GCD(12, 6)`.
     - Finally: `GCD(12, 6) = GCD(12 - 6, 6) = GCD(6, 6)`.
     - Since `GCD(6, 6) = 6`, the GCD of 48 and 18 is 6.

Euclid's Algorithm:

Efficient Approach
Euclid's Algorithm is an optimized version of this method using the property `GCD(a, b) = GCD(b, a % b)`:

1. Formula: `GCD(a, b) = GCD(b, a % b)`
   - Here, `a % b` is the remainder when `a` is divided by `b`.
   - If `b` divides `a` perfectly, then the remainder is `0`, and the divisor `b` is the GCD.
   - If not, replace `a` with `b` and `b` with the remainder (`a % b`), and repeat.

2. Example:
   - Find GCD of 48 and 18:
     - Start with `a = 48` and `b = 18`.
     - Apply the formula: `GCD(48, 18) = GCD(18, 48 % 18) = GCD(18, 12)`.
     - Repeat: `GCD(18, 12) = GCD(12, 18 % 12) = GCD(12, 6)`.
     - Finally: `GCD(12, 6) = GCD(6, 12 % 6) = GCD(6, 0)`.
     - Since the remainder is `0`, the GCD is `6`.

Summary:

- Basic Formula (`GCD(a, b) = GCD(a - b, b)`): This method is straightforward but may involve a lot of steps.
- Optimized Formula (`GCD(a, b) = GCD(b, a % b)`): This method is more efficient and widely used in practice because it reduces the problem size more rapidly and has a time complexity of O(log(min(a, b))).

This comment and explanation should help you understand both the basic and optimized methods for computing the GCD.

*/