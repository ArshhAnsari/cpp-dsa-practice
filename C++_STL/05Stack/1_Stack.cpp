#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating a stack of integers
    stack<int> stk;

    // Pushing elements onto the stack
    stk.push(1);
    stk.push(4);
    stk.push(8);
    stk.push(2);
    stk.push(6);

    // Displaying the top element of the stack
    cout << "Top element: " << stk.top() << "\n";

    // Popping the top element
    stk.pop();

    // Displaying the top element after pop
    cout << "Top element after pop: " << stk.top() << "\n";

    // Displaying the size of the stack
    cout << "Size of the stack: " << stk.size() << "\n";

    // Checking if the stack is empty
    cout << "Is the stack empty? " << (stk.empty() ? "Yes" : "No") << endl;

    // Creating a copy of the stack
    stack<int> stck(stk);

    // Displaying the top element of the copied stack
    cout << "Top element of the copied stack: " << stck.top() << "\n";
    
    // Temporary stack to help in displaying the elements
    stack<int> temp = stck;

    cout << "Stack elements (from top to bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Swap method:

    for (int i = 0; i <= 10;i++)
        cout << "-" << " ";
    cout << endl;
    stack<int> stk1;
    stack<int> stk2;

    // Push elements onto stk1
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);

    // Push elements onto stk2
    stk2.push(4);
    stk2.push(5);

    // Display elements of stk1
    cout << "stk1 before swap: ";
    while (!stk1.empty()) {
        cout << stk1.top() << " ";
        stk1.pop();
    }
    cout << endl;

    // Restore stk1 with some elements
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);

    // Display elements of stk2
    cout << "stk2 before swap: ";
    while (!stk2.empty()) {
        cout << stk2.top() << " ";
        stk2.pop();
    }
    cout << endl;

    // Swap the contents of stk1 and stk2
    stk1.swap(stk2);

    // Display elements of stk1 after swap
    cout << "stk1 after swap: ";
    while (!stk1.empty()) {
        cout << stk1.top() << " ";
        stk1.pop();
    }
    cout << endl;

    // Display elements of stk2 after swap
    cout << "stk2 after swap: ";
    while (!stk2.empty()) {
        cout << stk2.top() << " ";
        stk2.pop();
    }
    cout << endl;
    return 0;
}
