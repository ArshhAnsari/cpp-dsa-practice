#include <iostream>
using namespace std;

//void ith_bitno(int n, int bit) {
//    // Right shift the number by (bit - 1) positions
//    n >>= (bit - 1);
//
//    // Check if the rightmost bit is set
//    if (n & 1 == 1) {
//        cout << "The " << bit << "th bit of the number is 1";
//    } else {
//        cout << "The " << bit << "th bit of the number is 0";
//    }
//}

// Create a MASK to directly extract the ith bit by performing a bitwise AND operation with 1
void ith_bitno(int n, int bit) {
// Use the bitmask to extract the value of the ith bit
// Ternary operator
    int bit_value = (n & (1 << (bit - 1))) ? 1 : 0; // mask = 1 << (bit - 1);
    cout << "The " << bit << "th bit of the number is " << bit_value;
}


int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int bit;
    cout << "Enter the position of the bit (LSB at position 1): ";
    cin >> bit;

    // Check if the ith bit position is valid
    if (bit < 1 || bit > sizeof(int) * 8) {
        cout << "Invalid input for the bit position. Please enter a value between 1 and " << sizeof(int) * 8;
        return 1;
    }

    ith_bitno(num, bit);
    return 0;
}
