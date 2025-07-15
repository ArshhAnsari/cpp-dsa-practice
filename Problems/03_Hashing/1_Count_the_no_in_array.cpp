#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MAX_ELEMENT = 1e7 + 1; // adjust this to 10^7 + 1

// Solution 1:
// Using hashing techinque by using array hashing but have limitation that can cause segmentation!

/* 
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Precompute
    vector<int> hash(MAX_ELEMENT);
    for (int i = 0; i < size; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {

        int number;
        cout << "Enter the numbers to query:";
        cin >> number;
        // Fetch
        cout << "Frequency of " << number << ": " << hash[number] << endl;
    }

    return 0;
}
*/

// Solution 2: Using unordered_map for hashing
/*

int main() {
    int N, Q;
    cin >> N >> Q;  // N is the size of the array, Q is the number of queries
    unordered_map<int, int> freq_map;  // Hash map to store frequencies
    
    // Step 1: Fill the frequency map
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;  // Input each number
        freq_map[num]++;  // Increase the count for this number
    }

    // Step 2: Answer queries
    for (int i = 0; i < Q; i++) {
        int query_num;
        cin >> query_num;  // Input the number to query
        cout << freq_map[query_num] << endl;  // Output its frequency (0 if not found)
    }

    return 0;
}

*/


/*

When you first encounter a number in the unordered_map, it is initialized with a value of 0 (if it doesn't already exist in the map). 
Then, when you use ++, it increments that value by 1.

Here's a detailed breakdown:

First Iteration (for number 5):
When you first encounter 5 in the array, the map does not have an entry for 5 yet.
So, when you do freq_map[5]++, the map will:
Initialize freq_map[5] to 0 (since 5 hasn't appeared yet).
Increment it by 1, so freq_map[5] becomes 1.

Visualization:
Before the iteration: freq_map is empty {}.
After freq_map[5]++ (for the first 5 in the array), the map looks like this: {5: 1}.

How ++ Works:
freq_map[5]++ means:
First, check if 5 exists in the map.
If not, initialize freq_map[5] = 0.
Then increment the value by 1, so it becomes 1.

This happens with every number in the array:

Example Walkthrough (again):
Let’s revisit the array: [5, 10, 5, 2, 5, 7].

First 5:
freq_map[5]++ initializes freq_map[5] = 0, then increments it to 1.
Now the map is: {5: 1}.

First 10:
freq_map[10]++ initializes freq_map[10] = 0, then increments it to 1.
Now the map is: {5: 1, 10: 1}.

Second 5:
freq_map[5]++ sees that freq_map[5] is already 1, so it increments it to 2.
Now the map is: {5: 2, 10: 1}.

First 2:
freq_map[2]++ initializes freq_map[2] = 0, then increments it to 1.
Now the map is: {5: 2, 10: 1, 2: 1}.

Third 5:
freq_map[5]++ increments freq_map[5] from 2 to 3.
Now the map is: {5: 3, 10: 1, 2: 1}.

First 7:
freq_map[7]++ initializes freq_map[7] = 0, then increments it to 1.
Now the map is: {5: 3, 10: 1, 2: 1, 7: 1}.

Time Complexity:
Inserting into the map:

The time complexity of inserting and updating a value in an unordered_map is approximately O(1) on average, due to hashing.
Traversing the array:

We loop through the array of size N once, so the time complexity for the loop is O(N).
Overall Complexity:

The overall time complexity is O(N) for inserting all elements and O(Q) for querying, where N is the number of elements in the array and Q is the number of queries (if needed).
This makes it highly efficient for counting occurrences of elements in large arrays where N (the size of the array) can be as large as 10^5, and the values can be as large as 10^7, as per your constraints.

*/