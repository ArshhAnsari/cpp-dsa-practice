#include <iostream>
#include <map>

using namespace std;

int main() {
    // Initialize a map with some key-value pairs
    map<int, int> mpp;
    mpp[1] = 10;
    mpp[2] = 20;
    mpp[3] = 30;
    mpp.insert({4, 40}); // Using insert() method

    // Iterating over the map and printing key-value pairs
    cout << "Map contents: ";
    for (const auto& it : mpp) {
        // Using const auto& ensures that we are not copying elements unnecessarily
        cout << "(" << it.first << ", " << it.second << ") ";
    }
    cout << endl;

    // Find the element with key 2
    auto it = mpp.find(2);

    // Check if the key was found
    if (it != mpp.end()) {
        // Access the value using iterator
        cout << "Value associated with key 2: " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }

    // Access elements using at() and operator[]
    cout << "Value associated with key 4 using at(): " << mpp.at(4) << endl;
    cout << "Value associated with key 1 using operator[]: " << mpp[1] << endl;

    // Display size and check if the map is empty
    cout << "Map size: " << mpp.size() << endl;
    cout << "Is map empty? " << (mpp.empty() ? "Yes" : "No") << endl;

    return 0;
}

    // **Map Basics:**
    // - std::map stores key-value pairs in sorted order by key.
    // - Elements are std::pair<const Key, Value>. For map<int, int>, it's std::pair<const int, int>.

    // **Using auto:**
    // - auto deduces type of it as std::pair<const int, int>.
    // - Ensure correct member access for pairs.

    // **Const Reference:**
    // - Use const auto& to avoid copying, improving efficiency with large maps.