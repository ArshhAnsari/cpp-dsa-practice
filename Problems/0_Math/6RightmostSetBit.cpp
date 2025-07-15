#include <iostream>
#include <cmath>
using namespace std;

int rightmost_set_bit_position_1(int n){
    if(n==0)
        return -1;
    int position = 1;
    while ((n&1)==0)
    {
        n >>= 1;
        position++;
    }
    return position;
    }

int rightmost_set_bit_position_2(int n) {
    if (n == 0) return -1; // If the number is 0, there is no set bit
    return (int)(log2(n & -n)) + 1; // Using log2 function to find the position of the rightmost set bit
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // Using approach 1
    int position1 = rightmost_set_bit_position_1(num);
    cout << "Position of the rightmost set bit (Approach 1) of "<< num<<" is: " << position1 << endl;
    
    // Using approach 2
    int position2 = rightmost_set_bit_position_2(num);
    cout << "Position of the rightmost set bit (Approach 2) of "<< num<<" is: " << position2 << endl;
    return 0;
}