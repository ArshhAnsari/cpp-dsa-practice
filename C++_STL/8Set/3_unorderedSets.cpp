#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> uset;

    // Inserting elements
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(10);  // Duplicate element, will not be added

    // Displaying elements
    cout << "Elements in unordered_set: ";
    for (auto it : uset)
        cout << it << " ";
    cout << endl;

    // Checking if an element exists
    int key = 20;
    if (uset.find(key) != uset.end()) {
        cout << "Element " << key << " found in unordered_set." << endl;
    } else {
        cout << "Element " << key << " not found in unordered_set." << endl;
    }

    // Erasing an element
    uset.erase(20);
    cout << "Elements in unordered_set after erasing 20: ";
    for (auto it : uset)
        cout << it << " ";
    cout << endl;

    // Counting occurrences of an element (returns 1 if present, 0 if not)
    cout << "Count of element 30 in unordered_set: " << uset.count(30) << endl;

    // Checking the size of the unordered_set
    cout << "Size of unordered_set: " << uset.size() << endl;

    // Clearing all elements
    uset.clear();
    cout << "Size of unordered_set after clearing: " << uset.size() << endl;

    return 0;
}
