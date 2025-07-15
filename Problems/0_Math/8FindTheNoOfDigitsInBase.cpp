#include <iostream>
#include <cmath>
using namespace std;

int noOfDigit(int n, int base) {
    // Check if the number is zero
    if (n == 0) {
        return 0;  // If zero, return 0 since there are no digits
    }
    // Calculate the number of digits using logarithms
    int result = (log(n) / log(base)) + 1;
    return result;
}

int main() {
    int num, base;
    cout << "Enter the number and base: ";
    cin >> num >> base;
    cout << "Number of digits in " << num << " in base " << base << " is: ";
    cout << noOfDigit(num, base) << endl;
    return 0;
}
