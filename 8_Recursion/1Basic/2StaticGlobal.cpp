#include <iostream>
using namespace std;

// Global variable
int globalVar = 0;

// Recursive function using a local variable
int recursiveLocal(int n) {
    if (n > 0) {
        // In each recursive call, the current value of 'n' is added to the result.
        // No additional static or global variable is involved, ensuring a purely local behavior.        
        return recursiveLocal(n - 1) + n;
    }
    return 0;
}

// Recursive function using a static variable
int recursiveStatic(int n) {
    static int staticVar = 0;  // Shared among all calls, retains value
    if (n > 0) {
        staticVar++;
        return recursiveStatic(n - 1) + staticVar;
    }
    return 0;
}

// Recursive function using a global variable
int recursiveGlobal(int n) {
    if (n > 0) {
        globalVar++;
        return recursiveGlobal(n - 1) + globalVar;
    }
    return 0;
}

int main() {
    int a = 5;

    // Using a local variable
    cout << "Local Variable Result: " << recursiveLocal(a) << endl;

    // Using a static variable
    cout << "Static Variable Result: " << recursiveStatic(a) << endl;

    // Using a global variable
    cout << "Global Variable Result: " << recursiveGlobal(a) << endl;

    return 0;
}
