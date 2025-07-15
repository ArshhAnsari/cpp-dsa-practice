#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

//Brute force
bool powerFun(int n) {
    for (int i = 0; i <= 30; i++) {
        int ans = pow(2, i);
        if (ans == n) {
            return true;
        }
    }
    return false;
}

void PrintPowerOf2(int num) {
    int powers[31]; // Array to store powers of 2
    for (int j = 0; j <= 30; j++) {
        powers[j] = pow(2, j);

        if (powers[j] == num) {
            cout << num << " is a power of 2." << endl;
            return;  // Exit the function early when a match is found
        }
    }

    // If the loop completes without finding a match, print the result
    cout << num << " is not a power of 2." << endl;

    // Print the array of powers
    cout << "Powers of 2 array: ";
    for (int k = 0; k <= 30; k++)
    {
        cout << powers[k] << " ";
    }
    cout << endl;
}

//Optimal approach
bool powerFxn(int n) {
    int ans = 1;
    for (int i = 0; i <= 30; i++) {
        if (ans == n) {
            return true;
            }
        if (ans<INT_MAX/2)
            ans = ans * 2;
       }
    return false;
}

int main() {
    int Num;
    cout << "Enter the number: ";
    cin >> Num;
    //cout << powerFun(Num);
    cout << powerFxn(Num);
    //PrintPowerOf2(Num);
    return 0;
}
