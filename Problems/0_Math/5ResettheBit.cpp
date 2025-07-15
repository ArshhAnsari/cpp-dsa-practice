#include <iostream>
using namespace std;

int reset_ith_bit(int n, int position) {
    // Create a mask to reset the bit at the specified position to 0
    int mask = ~(1 << (position - 1));
    return n & mask;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int position;
    cout << "Enter the index of the bit to reset (1-based indexing): ";
    cin >> position;
    
    num = reset_ith_bit(num, position);
    
    cout << "The number after resetting the " << position << "th bit is: " << num;
    
    return 0;
}
