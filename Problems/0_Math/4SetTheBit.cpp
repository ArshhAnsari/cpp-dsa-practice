#include <iostream>
using namespace std;

void set_ith_bit(int n, int position) {
    // Create a mask to set the bit at the specified position to 1
    int new_value = (n | (1 << position));
    cout << "The new value after setting the " << position << "th bit to 1 is: " << new_value;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int position;
    cout << "Enter the index of the bit to set to 1: ";
    cin >> position;
    set_ith_bit(num, position);
    return 0;
}
