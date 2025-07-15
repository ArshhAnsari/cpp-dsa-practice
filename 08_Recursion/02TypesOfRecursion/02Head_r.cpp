#include <iostream>
using namespace std;

// Head recursive function
void Headrecursive(int n) {
    if (n > 0) {
        // Recursive call with decremented value before any other operations
        Headrecursive(n - 1);
        
        // Print the current number after the recursive call
        cout << n << " ";
    } 
}

// Equivalent while loop for head recursion
void whileLoop(int n) {
    int i = 1;
    while (i <= n) {
        // Print the current number before the loop iteration
        cout << i << " ";
        
        // Increment the value for the next iteration
        i++;
    }
}

int main() {
    int x = 5;

    // Using the head recursive function
    cout << "Head Recursive Output: ";
    Headrecursive(x);
    cout << endl;

    // Using the equivalent while loop
    cout << "While Loop Output: ";
    whileLoop(x);
    cout << endl;

    return 0;
}
/*
Head Recursive Example

Functionality:
- The `Headrecursive` function counts down from a given number `n` and prints each number after the recursive call.
- The `whileLoop` function replicates the head-recursive behavior using a while loop, printing the current number before each iteration.

Complexity:
- **Headrecursive Function:**
  - Time Complexity: O(n) - The function makes 'n' recursive calls, performing constant-time work in each call.
  - Space Complexity: O(n) - Each recursive call adds a new frame to the call stack.

- **While Loop Function (Head Recursive Equivalent):**
  - Time Complexity: O(n) - The loop iterates 'n' times, performing constant-time work in each iteration.
  - Space Complexity: O(1) - While loops typically do not use additional space proportional to the input size.

*/