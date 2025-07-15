#include<iostream>
using namespace std;

int main() {
    int max;

    // Ternary operator to find the maximum of two numbers
    int a = 10, b = 15;
    max = (a > b) ? a : b; // variable = (condition) ? expTrue : expFalse;
    cout << "Maximum of " << a << " and " << b << " is: " << max << endl;
    // cout << ((a > b) ? "Maximum is " : "Minimum is ") << ((a > b) ? a : b) << endl;

    bool hungry = true;
    hungry ? cout << "You are hungry" : cout << "You are full";
    // cout << (hungry ? "You are hungry" : "You are full !");
    cout << endl;
    
    // Short-circuiting with logical AND (&&) and logical OR (||)
    int c = 1, d = 1;

    // Short-circuiting in logical OR (||)
    int f = c || --d; // If the first expression is true, the logical OR is true.
    // Here d remains unchanged because --d was not evaluated.
    // Short-circuiting in logical AND (&&)
    int e = c-- && --d; // If the first expression is false, the logical AND is false, and the second expression is not evaluated.
    
    cout << "c: " << c << " d: " << d << " f: " << f << " e: " << e << endl;

    return 0;
}
/*

Logical AND (&&):
If the first condition is true, the second condition is evaluated because the result of the entire expression depends on the second condition.
If the first condition is false, the second condition is not evaluated because the result of the entire expression is already false (short-circuiting).

Logical OR (||):
If the first condition is true, the second condition is not evaluated because the result of the entire expression is already true (short-circuiting).
If the first condition is false, the second condition is evaluated because the result of the entire expression depends on the second condition.

- Only true proceeds to check the second condition in &&.
- Only false proceeds to check the second condition in ||.

This behavior is called short-circuit evaluation, and it is used to optimize performance and avoid unnecessary computations or side effects.



*/
