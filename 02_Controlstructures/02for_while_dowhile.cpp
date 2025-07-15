// Loop structure (for,while, do-while loop)
/* syntax for for-loop
    for(initialization;condition;updation)
    {
    loop body;
        }
    */

/* syntax for while-loop
    while(condition)
    {
    loop body;
        }
    */

/* syntax for do-while-loop
    do
    {
    statements;
    } while(condition);
    */

#include<iostream>
using namespace std;

int main() {
    // For-loop to print numbers from 1 to 10
    cout << "Output of the for loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    // While-loop to print numbers from 1 to 10
    cout << endl << "Output of the while loop: ";
    int w = 1;
    while (w <= 10) {
        cout << w << " ";
        w++;
    }

    // Do-while loop to print numbers from 1 to 10
    cout << endl << "Output of the do-while loop: ";
    int d = 1;
    do {
        cout << d << " ";
        d++;
    } while (d <= 10);

    // Multiplication table for a given number
    cout << endl << "Multiplication Table: ";
    int tableNumber, multiplier = 1, result;
    cout << endl << "Enter the number: ";
    cin >> tableNumber;
    do {
        result = tableNumber * multiplier;
        cout << tableNumber << " X " << multiplier << " = " << result << endl;
        multiplier++;
    } while (multiplier <= 10);

    // Break and Continue in a loop
    cout << endl << "Using break and continue: ";
    for (size_t l = 0; l < 5; l++) {
        // If l is 2, continue to the next iteration
        if (l == 2) {
            continue;
        }
        // If l is 3, break out of the loop
        // if (l == 3) {
        //     break;
        // }
        cout << l << " ";
    }

    // Workflow comments
    // - For-loop: Executes a block of code repeatedly as long as a condition is true. It consists of initialization, condition, and update.
    // - While-loop: Repeats a block of code as long as a condition is true. It checks the condition before each iteration.
    // - Do-while loop: Similar to a while-loop, but it always executes the code block at least once because it checks the condition after each iteration.
    // - Multiplication Table: Generates the multiplication table for a given number using a do-while loop.
    // - Break and Continue: Demonstrates the use of break to exit the loop and continue to skip an iteration in a for-loop.
    
    return 0;
}

