#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec;
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(8);
    
    //Another one for taking all elements at once
    // vector<int> vec={1,2,3,4};

    // Display vector before popping the last element
    cout << "Vector before using pop_back: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // Remove the last element
    vec.pop_back();

    // Display vector after popping the last element
    cout << "Vector after using pop_back: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // Display vector capacity and size
    cout << "Capacity of vec: " << vec.capacity() << endl;
    cout << "Size of vec: " << vec.size() << endl;

    // Clear the vector
    vec.clear();

    // Display vector capacity and size after clearing
    cout << "Size of vec after clear: " << vec.size() << endl;
    cout << "Capacity of vec after clear: " << vec.capacity() << endl;

    // Create a vector with 5 elements, each initialized to 10
    vector<int> vec1(5, 10);

    // Access front, back, and a specific element
    cout << "First element of vec1: " << vec1.front() << endl;
    cout << "Last element of vec1: " << vec1.back() << endl;
    cout << "Element at index 2 in vec1: " << vec1.at(2) << endl;

    // Copy vec1 into vec2
    vector<int> vec2(vec1);

    // Display elements of vec2
    cout << "Elements of vec2 (copy of vec1): [";
    for (int i : vec2)
        cout << i << " ";
    cout <<"]"<< endl;

    // Displaying wheter the vector is empty or not
    cout << "Is the Vector 'vec2' empty!: " << (vec2.empty() ? "Yes" : "No") << endl;

    return 0;
}
