#include <iostream>
using namespace std;

int nth_rowsum(int n) {
    if (n == 0)
        return 0;
    int sum = 1 << (n-1);
    return sum;
}

int main() {
    int nth_term;
    cout << "Enter the nth term for the sum of row in Pascal's triangle (1-based indexing): ";
    cin >> nth_term;
    cout << "Sum of the " << nth_term << "th row in Pascal's triangle: " << nth_rowsum(nth_term) << endl;
    return 0;
}
