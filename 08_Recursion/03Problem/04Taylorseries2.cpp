#include <iostream>
using namespace std;

//Taylor series Horner's Rule
double Horner(int x,int n){
    static double s = 1;
    if (n==0)
        return s;
    s = 1 + x * s / n;
    return Horner(x, n - 1);
}
double iterative(int x,int n){
    static double s = 1;
    for (; n >0; n--)
    {
        s = 1 + x * s / n;
        // s = 1 + x/n*s ;//This will not give precise answer ||
        /*
        because * and / have the same precedence and associate left-to-right, it is parsed as:

        s = 1 + ( (x / n) * s );
        s = 1 + (5/2) * 3.0;     // 5/2 → 2 (integer division)
                                // = 1 + (2 * 3.0) = 1 + 6.0 = 7.0
                                0.5 lost
        Why that loses precision:
        Integer division first

        If x and n are integers, then x/n is also an integer division. For example, 5/2 becomes 2, not 2.5.

        You immediately truncate the fractional part before ever multiplying by s.*/
    }
    
    return s;
}
int main() {
    cout << iterative(2, 10) << endl;
    cout << Horner(2, 10);
    return 0;
}

// Explanation of Horner's Rule:
// Horner's Rule is a technique used to efficiently evaluate polynomials, such as those in Taylor series approximations.
// In the expression s = 1 + x * s / n, the order is crucial for accurate computation. If written as s = 1 + x / n * s, incorrect
// results may occur due to operator precedence. The current order ensures proper representation of the series' recursive nature,
// providing accuracy. The expression arrangement is significant for preserving the intended mathematical logic.

// Integer Division in Taylor Series:
// The use of integer division (s / n) in the expression s = 1 + x * s / n is crucial for accurate Taylor series calculations.
// Integer division truncates the fractional part, preserving only the whole number in the division result. This aligns with how
// Taylor series work, where we often deal with terms becoming smaller and smaller. Using integer division in the Taylor series
// helps maintain precision and stability in our calculations.

// Efficient Taylor Series Approximation:
// Combining Horner's Rule and integer division enhances the efficiency of the Taylor series approximation, ensuring both
// accuracy and stability in the calculation process.
