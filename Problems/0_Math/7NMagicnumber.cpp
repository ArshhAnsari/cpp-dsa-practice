#include <iostream>
using namespace std;

// Function to calculate the magic number based on the binary representation of the input
int magicNumber(int n) {
    int base = 5;
    int result = 0;
    while (n > 0) {
        int lastDigit = n & 1;
        n >>= 1;
        result += lastDigit * base;
        base = base * 5;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Calculate and display the magic number corresponding to the input
    cout << "The magic number corresponding to the number " << num << " is: ";
    cout << magicNumber(num) << endl;

    return 0;
}
