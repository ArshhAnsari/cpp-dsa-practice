#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // Inserting elements
    ms.insert(1);   // {1}
    ms.insert(1);   // {1, 1}
    ms.insert(1);   // {1, 1, 1}

    // Displaying elements
    cout << "Elements in multiset: ";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    // Erasing a single occurrence of '1'
    ms.erase(ms.find(1)); // Erases one '1', resulting in {1, 1}

    // Displaying elements after erasure
    cout << "After erasing: ";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    // Finding and displaying the first occurrence of '1'
    multiset<int>::iterator itr = ms.find(1);
    if (itr != ms.end())
        cout << "First occurrence of 1: " << *itr << endl;

    // Counting occurrences of '1'
    int count = ms.count(1);
    cout << "The count of 1 is: " << count << endl;

    //Earsing the set
    //ms.erase(ms.begin(),ms.end());
    ms.clear();
    // Checking if the multiset is empty
    cout << "Is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    return 0;
}
