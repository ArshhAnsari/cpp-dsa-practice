#include <iostream>
#include <utility>  // Required for std::pair

using namespace std;

int main() {
    // Basic pair with two integers
    // pair<int, int> basicPair ;
    // basicPair = make_pair(1, 2);
    pair<int, int> integerPair = {1, 2};
    cout << "Integer Pair: " << integerPair.first << " " << integerPair.second << endl;

    // Pair with an integer and a string
    pair<int, string> intStringPair = make_pair(1, "hello");
    cout << "First element: " << intStringPair.first << endl;
    cout << "Second element: " << intStringPair.second << endl;

    // Nested pair: Pair within a pair
    pair<int, pair<int, int>> nestedPair = {1, {2, 3}};
    cout << "Nested Pair: " << nestedPair.first << " " << nestedPair.second.first << " " << nestedPair.second.second << endl;

    // Array of pairs
    pair<int, int> arrayOfPairs[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Second element of second pair in array: " << arrayOfPairs[1].second << endl;

    // Modifying elements in the int-string pair
    intStringPair.first = 2;
    intStringPair.second = "World";

    cout << "Modified Pair - First element: " << intStringPair.first << endl;
    cout << "Modified Pair - Second element: " << intStringPair.second << endl;

    return 0;
}
