#include <iostream>
using namespace std;

double eTaylorSeries(int x, int n) {
    static double p = 1, f = 1;
    double result;

    if (n == 0)
        return 1;

    result = eTaylorSeries(x, n - 1);
    p *= x;     // Power term x^n
    f *= n;     // Factorial term n!

    return result + p / f;
}

int main() {
    int x, n;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    double approximation = eTaylorSeries(x, n);

    cout << "Approximation of e^" << x << " using " << n << " terms: " << approximation << endl;

    return 0;
}