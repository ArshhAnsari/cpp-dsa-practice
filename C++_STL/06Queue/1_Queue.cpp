#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myq;

    // Add elements to the queue
    myq.push(1);
    myq.push(2);
    myq.push(3);

    // Modify the element at the back of the queue
    myq.back() += 5;

    // Display the element at the back
    cout << "Element at the back: " << myq.back() << endl;

    // Display the element at the front
    cout << "Element at the front: " << myq.front() << endl;

    // Remove the element from the front
    myq.pop();

    // Display the new element at the front after popping
    cout << "New front element after pop: " << myq.front() << endl;

    // Other operations: size, swap, empty (similar to stack)
    // For example:
    cout << "Size of the queue: " << myq.size() << endl;
    cout << "Is the queue empty? " << (myq.empty() ? "Yes" : "No") << endl;

    return 0;
}
