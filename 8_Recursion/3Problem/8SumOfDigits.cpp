// Sum of digits
/*
for 1342==10 //i.e 1+3+4+2=10;
*/
#include <iostream>
using namespace std;

int sumOfdigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfdigits(n / 10);
    }
}

int main() {
    int num;
    cout << "Enter a number to find its sum: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfdigits(num) << endl;
    return 0;
}
