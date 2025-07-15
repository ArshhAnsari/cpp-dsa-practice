#include <iostream>
using namespace std;

// Function to print numbers in descending order before the recursive call
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";  // Print the current number before the recursive call
        fun1(n - 1);        // Recursive call with decremented value
    }
}

// Function to print numbers in ascending order after the recursive call
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);        // Recursive call with decremented value before printing the current number
        cout << n << " ";  // Print the current number after the recursive call
    }
}

// Function to print a newline for clarity
void space()
{
    cout << endl;
}

int main()
{
    int x = 3;

    cout << "Call fun1 to print numbers in descending order before the recursive call: ";
    fun1(x);

    // Call the space function to print a newline for clarity
    space();

    cout << "Call fun2 to print numbers in ascending order after the recursive call: ";
    fun2(x);

    return 0;
}
