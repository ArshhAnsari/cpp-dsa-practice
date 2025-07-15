#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// Custom comparator function for sorting pairs
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // If second elements are the same, sort by first in descending order
    return p1.first > p2.first;
}

int main() {
    int a = 3, b = 5;

    // Printing maximum and minimum values
    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    // Swapping values
    swap(a, b);
    cout << "Swapped a: " << a << endl;

    // Reversing a string
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "Reversed string: " << abcd << endl;

    // Sorting an array
    int arr[4] = {2, 4, 5, 1};
    sort(arr, arr + 4);
    cout << "Sorted array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Binary search in sorted array
    bool found = binary_search(arr, arr + 4, 4); // Check if 4 exists in the array
    cout << "Is 4 present in the array? " << (found ? "Yes" : "No") << endl;
    //The binary_search() function requires the array to be sorted, but after rotating the array, it was not sorted anymore, so the search was failing.

    // Finding max and min elements in array
    cout << "Max element: " << *max_element(arr, arr + 4) << endl;
    cout << "Min element: " << *min_element(arr, arr + 4) << endl;

    // Sorting in descending order
    sort(arr, arr + 4, greater<int>());
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotating an array
    rotate(arr, arr + 1, arr + 4); // For array
    cout << "Array after rotation: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting array of pairs using custom comparator
    cout << "Sorting array of pairs with custom comparator:" << endl;
    pair<int, int> ap[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(ap, ap + 3, comp); // Custom sort based on 'second' and 'first' element
    cout << "Sorted array of pairs: ";
    for (auto &p : ap) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // Counting set bits (popcount)
    int num = 7;
    int cnt = __builtin_popcount(num); // GCC extension to count set bits in int
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    // Counting set bits in a long long value
    long long num1 = 165786578687LL;
    int cnt1 = __builtin_popcountll(num1); // GCC extension for long long
    cout << "Number of set bits in " << num1 << " is: " << cnt1 << endl;

    // Generating and printing all permutations of a string
    string s = "321";
    sort(s.begin(), s.end()); // Sort the string first for next_permutation to work
    cout << "Permutations of the string '321':" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
