#include <iostream>
using namespace std;

// Iterative Method

int fib(int n) {
    int t0 = 0, t1 = 1, s;

    if (n <= 1)
        return n;
    else {
        for (size_t i = 2; i <= n; i++) {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
}

// Below functions are iterative and uses dynamic programming
// To print the entire Fibonacci sequence up to the nth term
/* void fibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci sequence up to the " << n << "th term: ";
    for (int i = 0; i <= n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;

//  Time Complexity:
//  Time Complexity: O(n), because you are iterating over the sequence once from 2 to n.
//  Space Complexity: O(n), because you are storing the entire Fibonacci sequence in an array of size n+1.
//  Explanation:
//  The array fib[] stores all the Fibonacci numbers from 0 to n.
//  You first initialize fib[0] = 0 and fib[1] = 1, and then calculate subsequent numbers using the relation fib[i] = fib[i-1] + fib[i-2].
//  At the end, the entire sequence is printed from fib[0] to fib[n].

}
*/

// To calculate and return only the nth Fibonacci number
/* int fibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
    // O(n), because it computes each Fibonacci number once and stores the results.
}
*/

// To calculate using Recursive function:::
int recursive_fibo(int n){
    if(n<=1)
        return n;
    return (recursive_fibo(n - 2) + recursive_fibo(n - 1));
    }

int main() {
    int num;
    cout << "Enter the value of n to perform Fibonacci calculations: ";
    cin >> num;

    if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        // Uncomment the line below based on whether you want to print the sequence or the nth Fibonacci number

        // cout << "The " << num << "th Fibonacci number is: " << fib(num) << endl; // For Iterative Method
        // fibonacci(num); // To print the sequence
        // cout << "The " << num << "th Fibonacci number is: " << fibonacci(num) << endl; // To calculate and return only the nth Fibonacci number
         cout << "The " << num << "th Fibonacci number is: " << recursive_fibo(num) << endl;
    }

    return 0;
}

/*
Conclusion:
Iterative Approach: Faster and more space-efficient, O(n) time, O(1) space.
Recursive Approach: Slower, exponential time O(2^n).
Dynamic Programming (Memoization): Same time complexity as iterative (O(n)) but uses more space (O(n)).
Thus, the iterative method is optimal when you need both time and space efficiency for calculating Fibonacci numbers.
*/