#include <iostream>
using namespace std;

void Tailrecursive(int n) {
    if (n > 0) {
        cout << n << " ";  // Print the current number before the recursive call
        Tailrecursive(n - 1);  // Recursive call with decremented value
    }
}

void whileLoop(int n) {
    while (n > 0) {
        cout << n << " ";  // Print the current number before the loop iteration
        n--;  // Decrement the value for the next iteration
    }
}

int main() {
    int x = 5;

    // Using the recursive function
    cout << "Recursive Output: ";
    Tailrecursive(x);
    cout << endl;

    // Using the equivalent while loop
    cout << "While Loop Output: ";
    whileLoop(x);
    cout << endl;

    return 0;
}
/*
Tail Recursive Example

Functionality:
- The `Tailrecursive` function counts down from a given number `n` and prints each number before the recursive call.
- The `whileLoop` function achieves the same functionality using a while loop, printing the current number before each iteration.

Complexity:
- **Tailrecursive Function:**
  - Time Complexity: O(n) - The function makes 'n' recursive calls, performing constant-time work in each call.
  - Space Complexity: O(n) - Each recursive call adds a new frame to the call stack.

- **While Loop Function:**
  - Time Complexity: O(n) - The loop iterates 'n' times, performing constant-time work in each iteration.
  - Space Complexity: O(1) - While loops typically do not use additional space proportional to the input size.

*/