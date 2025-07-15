#include <iostream>
using namespace std;

// Recursive function to calculate nCr using direct formula " n!/r!(n-r)! "
int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return fact(n - 1) * n;
}

// Recursive function to calculate nCr by using Pascal's triangle
int nCr(int n, int r) {
    if (n == 0 || r == 0 || r == n)
        return 1;
    else
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;
    cout << "Enter the value for n and value for r: ";
    cin >> n >> r;

    int numerator, denominator;
    numerator = fact(n);
    denominator = fact(r) * fact(n - r);

    int NcR = numerator / denominator;

    // Output using direct calculation
    cout << "nCr using direct calculation: " << NcR << endl;

    // Output using recursive function
    cout << "nCr using recursion: " << nCr(n, r) << endl;

    return 0;
}
