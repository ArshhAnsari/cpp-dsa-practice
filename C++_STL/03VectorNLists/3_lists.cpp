#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lss;

    // Adding elements to the list
    lss.push_back(5);
    lss.emplace_back(8);

    // Adding elements to the front of the list
    lss.push_front(4); 
    lss.emplace_front(3);
    lss.insert(lss.begin(), 3);  
    // Slower than push_front for this specific operation.
    /*  
    Explanation:
    push_front(4): This operation is very efficient because it directly adds the element to the front of the list with O(1) time complexity.
    The operation adjusts the pointers in the doubly linked list to include the new element at the front.
    insert(lss.begin(), 3): Although this operation also adds an element to the front, 
    it's generally less efficient compared to push_front because insert may involve additional overhead, 
    especially for determining the exact insertion point and managing iterators.
    
    */


    // Displaying the list elements
    cout << "Elements in the list: ";
    for (int i : lss)
        cout << i << " ";
    cout << endl;

    // Other useful functions (similar to vector):
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()

    return 0;
}
