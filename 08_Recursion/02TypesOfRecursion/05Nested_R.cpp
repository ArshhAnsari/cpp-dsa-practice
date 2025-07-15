#include <iostream>
using namespace std;

// Recursive function demonstrating nested recursion
int nestedRecursion(int n) {
    // Base case: If n is greater than 100, return n - 10
    if (n > 100) {
        return n - 10;
    } else {
        // Nested recursion: Calling the function with the result of another recursive call
        return nestedRecursion(nestedRecursion(n + 11));
    }
}

int main() {
    // Default input value set to 95
    int a = 95;

    // Call the nestedRecursion function with the default input value
    int result = nestedRecursion(a);

    // Output: Display the result of the nested recursion
    cout << "Result: " << result << endl;

    return 0;
}
