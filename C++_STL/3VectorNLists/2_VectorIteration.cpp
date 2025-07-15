#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector and add elements
    vector<int> vec = {10, 20, 30, 40};

    // Iterator pointing to the second element
    vector<int>::iterator it = vec.begin();
    it++;  // Move iterator to the second element
    cout << "Element at position 2: " << *it << endl;

    // Move iterator to the fourth element
    it = it + 2;
    cout << "Element at position 4: " << *it << endl;

    // Accessing the last element using vec.back()
    cout << "Last element: " << vec.back() << endl;

    /*
        Additional iterator types:
        vector<int>::iterator it = vec.end();   // Points to one past the last element
        vector<int>::reverse_iterator rit = vec.rend();  // Points before the first element
        vector<int>::reverse_iterator rit = vec.rbegin();  // Starts from the last element
    */

    // Iterate through the vector using iterator
    cout << "Vector elements using iterator: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Iterate using auto keyword
    cout << "Vector elements using auto keyword: ";
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    cout << "Vector elements using range-based loop: ";
    for (auto element : vec) {
        cout << element << " ";
    }
    cout << endl;

    // Correct way to copy vec to vec2
    vector<int> vec2(vec);  

    // Erase operations
    vec2.erase(vec2.begin() + 1);  // Erase the second element
    vec2.erase(vec2.begin() + 1, vec2.begin() + 2);  // Erase elements in the range [start, end)

    // Display vector after erase operations
    cout << "vec2 after erasing elements: ";
    for (auto element : vec2) {
        cout << element << " ";
    }
    cout << endl;

    // Insert operations
    vector<int> v(2, 100);  // Initialize vector v with two elements of 100

    v.insert(v.begin(), 300);  // Insert 300 at the beginning
    /*
    // If you want to use the iterator returned by insert for further operations, assign it to a variable and then use it.
    auto it = v.insert(v.begin(), 300);
    cout << "Inserted value: " << *it << endl;
    */

    v.insert(v.begin() + 1, 2, 10);  // Insert two 10s at the second position

    // Inserting elements from another vector
    vector<int> copy(2, 50);  // Vector copy with two elements of 50
    v.insert(v.begin(), copy.begin(), copy.end());  // Insert all elements from copy to the beginning of v

    // Display vector after insert operations
    cout << "Vector v after insertions: ";
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    
    /*
    In C++, the insert function of std::vector returns an iterator to the newly inserted element.
    It does not return the number of elements inserted or any kind of value that can be directly printed.
    So you cannot directly print the iterator returned by insert using cout;
    the iterator is not a value but a pointer-like object that represents a position in the container.
    */

    return 0;
}
