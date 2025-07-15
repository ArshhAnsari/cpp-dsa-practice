#include <iostream>
using namespace std;

// Function to calculate Fibonacci numbers using memoization
int fib(int n, int F[]) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        // Check if the value is already memoized
        if (F[n - 2] == -1)
            F[n - 2] = fib(n - 2, F);
        if (F[n - 1] == -1)
            F[n - 1] = fib(n - 1, F);

        // Calculate and memoize the result
        return F[n - 2] + F[n - 1];
    }
}

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    // Initialize memoization array with -1
    int F[num + 1];
    for (int i = 0; i <= num; i++) {
        F[i] = -1;
    }

    // Calculate and print the Fibonacci number
    cout << "The " << num << "th Fibonacci number is: " << fib(num, F) << endl;

    return 0;
}

/*
                    fib(3)
              ____ /     \____
             /                  \
         fib(2)                fib(1)
         /   \                 /    \
    fib(1)   fib(0)         F[1]    F[0]
    /   \
  F[1]  F[0]
*/
