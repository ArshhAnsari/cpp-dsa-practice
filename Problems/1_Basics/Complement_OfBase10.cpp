#include <iostream>
using namespace std;

void findcomplement(int n){
    int bitlength = 0;
    int temp = n;

    while (temp>0)
    {
        temp >>= 1; // Right shift by 1 (equivalent to dividing by 2)
        bitlength++;
    }
    // Calculate a helper variable with all bits set to 1 up to the length of the binary representation
    int helper = (1 << bitlength) - 1;
    int result = helper ^ n;
    cout << "The complement of " << n << " is: " << result << endl;
    }

int main() {
    int num;
    cout << "Enter the number for which the complement is done: ";
    cin >> num;
    findcomplement(num);
    return 0;
}

/*

## Key Points
- The code uses bit manipulation to count the number of bits in the binary representation of a number.
- A temporary variable is introduced to avoid modifying the original number during bit counting.
- The bitwise XOR operation is then performed between the helper variable and the original number.
- 
### Refernce to line 10 in while-loop
In binary representation, right-shifting a number by 1 is equivalent to dividing it by 2.
For example:
If you have the binary number 1010 (which is 10 in decimal), right-shifting it by 1 (101), 
you effectively divide it by 2.
Similarly, right-shifting 1100 (which is 12 in decimal) by 1 results in 110 (which is 6 in decimal).
It's a way to express the idea that each right shift operation effectively divides 
the number by 2 in the context of binary representation. 
*/