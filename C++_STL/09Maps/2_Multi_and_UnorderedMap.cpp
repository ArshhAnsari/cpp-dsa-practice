#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main() {
    // Unordered Map Example
    unordered_map<int, string> umap;

    // Inserting key-value pairs in unordered_map
    umap[1] = "Apple";
    umap[2] = "Banana";
    umap[3] = "Cherry";
    umap.insert({4, "Date"});

    // Unordered maps store key-value pairs with unique keys.
    // The order of elements is not guaranteed (they're unordered).
    // Fast access, insertion, and deletion: Average O(1) time complexity.
    cout << "Unordered Map contents: ";
    for (const auto& it : umap) {
        cout << "(" << it.first << ", " << it.second << ") ";
    }
    cout << endl;

    // Accessing elements in unordered_map using find
    auto it = umap.find(2);
    if (it != umap.end()) {
        cout << "Found in unordered_map: " << it->second << endl;
    } else {
        cout << "Key not found in unordered_map" << endl;
    }

    // Multimap Example
    multimap<int, string> mmap;

    // Inserting key-value pairs in multimap
    mmap.insert({1, "Apple"});
    mmap.insert({1, "Apricot"});
    mmap.insert({2, "Banana"});
    mmap.insert({2, "Blueberry"});
    mmap.insert({3, "Cherry"});

    // Multimaps also store key-value pairs, but unlike unordered_map:
    // - They allow multiple pairs with the same key (keys are not unique).
    // - Elements are stored in sorted order by key (since it's a map).
    // - Functions are similar to those in a regular map, but `find` can return multiple values.
    cout << "Multimap contents: ";
    for (const auto& it : mmap) {
        cout << "(" << it.first << ", " << it.second << ") ";
    }
    cout << endl;

    // Finding all elements with a specific key in multimap
    auto range = mmap.equal_range(2);
    cout << "Values associated with key 2 in multimap: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Summary:
    // - `unordered_map` offers fast access with unique keys but no ordering.
    // - `multimap` allows duplicate keys and stores elements in a sorted order.
    /*
    When you insert elements like {1, 2}, {2, 3}, {3, 4},
    they will be stored in the unordered_map based on the hash values of their keys.
    The order in which they are stored and accessed can seem arbitrary and will likely
    vary depending on factors like the hash function and the current state of the map.

    For example, the output might look something like:
    (3, 4) (1, 2) (2, 3)

    Or it could be:
    (1, 2) (3, 4) (2, 3)

    The point is that unordered_map does not maintain any specific order. 
    The key-value pairs are stored in a manner that optimizes for quick access based 
    on the hash of the keys, not in the order they were inserted.
    */
    return 0;
}
