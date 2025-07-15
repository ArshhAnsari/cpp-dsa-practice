#include <iostream>
using namespace std;

// Forward declaration for funA & funB
void funB(int n);

// Function A: prints numbers in decreasing order and calls funB
void funA(int n) {
    if (n > 0) {
        cout << n << " ";
        funB(n - 1);
    }
}

// Function B: prints numbers with a halved step and calls funA
void funB(int n) {
    if (n > 1) {
        cout << n << " ";
        funA(n / 2);
    }
}

int main() {
    int a = 20;
    funA(a);
    return 0;
}
/*
Indirect Recursion Example

This code illustrates an example of indirect recursion involving two functions, `funA` and `funB`. These functions call each other in a circular manner.

Code Explanation:

- **funA Function:**
  - The `funA` function takes an integer `n` as input and prints the numbers from `n` to `1` in a decreasing sequence.
  - In each step, it calls the `funB` function with the decremented value of `n - 1`.

- **funB Function:**
  - The `funB` function takes an integer `n` as input and prints the numbers from `n` to `1` in a decreasing sequence, but the step size is halved in each recursive call (`n / 2`).
  - In each step, it calls the `funA` function with the halved value of `n / 2`.

- **Main Function:**
  - The `main` function initializes an integer `a` with the value `20`.
  - It then calls the `funA` function with the value of `a`.

Notes:

Forward declarations for functions are essential in C++ when a function is called before its actual definition.
In this code, both funA and funB are declared before their definitions, allowing mutual calls between the functions.
This resolves any compilation issues related to function calls and enables the functions to reference each other.
Forward declarations inform the compiler about the existence and signatures of functions, ensuring correct linking during compilation.
Without forward declarations, the compiler might encounter undefined references and fail to recognize the functions, leading to compilation errors.


*/