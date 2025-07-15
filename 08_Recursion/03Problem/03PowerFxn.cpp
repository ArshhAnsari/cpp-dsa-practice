#include <iostream>
using namespace std;

// Recursive power function to calculate m^n
int pow(int m, int n) {
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;  // Recursive calculation: m^n = m * m^(n-1)
}

// More efficient version with less time & space complexity 
// int pow(int m, int n) {
//     if (n == 0)
//         return 1;
//     if (n % 2 == 0)
//         return pow(m * m, n / 2);  // Efficient calculation for even powers: m^(2k) = (m^2)^k
//     else
//         return m * pow(m * m, (n - 1) / 2);  // Efficient calculation for odd powers: m^(2k+1) = m * (m^2)^k
//     // Remember*: Ensure proper order of operations, (m * pow(m * m, (n - 1 / 2)) would yield incorrect results
//     // Due to operator precedence, division (/) is performed before subtraction (-), leading to an incorrect result.
// }

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int result = pow(base, exponent);
    cout << "Result: " << result << endl;
    return 0;
}
