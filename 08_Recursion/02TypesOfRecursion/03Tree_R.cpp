#include <iostream>
using namespace std;

// Recursive function that prints numbers in a pattern
void fun(int n) {
    if (n > 0) {
        cout << n << " ";

        // Recursive calls: fun is called twice in each step
        fun(n - 1);
        fun(n - 1);
    }
}

int main() {
    int a = 3;

    // Calling the recursive function with input 'a'
    fun(a);

    return 0;
}
/*
Tree Recursion Example

Code Summary:

- **fun Function:**
  - Takes an integer `n` as input.
  - Prints the current value of `n`.
  - Makes two recursive calls with decremented values `n - 1`, creating a binary tree pattern.

Tree Recursion Concept:

- Tree recursion involves a function making more than one recursive call, creating a branching structure.
- In this code, `fun` exhibits tree recursion by branching out into two recursive calls in each step.

*/