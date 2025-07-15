#include <iostream>
using namespace std;

// Recursive function to calculate the sum of natural numbers up to n
int recursiveSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return recursiveSum(n - 1) + n;
    }
}

// Direct formula to calculate the sum of natural numbers up to n
int directFormulaSum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    // Input: Get the number up to which the sum is needed
    int num;
    cout << "Enter the number up to which the sum is needed: ";
    cin >> num;

    // Calculate the sum using recursion
    int recursiveSumResult = recursiveSum(num);
    cout << "Sum using recursion: " << recursiveSumResult << endl;

    // Calculate the sum using the direct formula
    int directFormulaSumResult = directFormulaSum(num);
    cout << "Sum using direct formula: " << directFormulaSumResult << endl;

    return 0;
}
