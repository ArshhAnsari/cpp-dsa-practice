// Count frequency of each element in the array:

//#include <bits/stdc++.h>

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Solution 1:

void countFreq(int arr[], int n) 
/*
Problems/Hashing/103.jpg
Problems/Hashing/104.jpg

Step-by-step execution:
Initial Setup:
Array: [5, 2, 3, 5, 2, 5]
visited array: [false, false, false, false, false, false]
Iteration 1 (i = 0):
arr[0] = 5.

It has not been processed (visited[0] == false), so we start counting occurrences of 5.

Inner loop:
arr[1] = 2: does not match 5.
arr[2] = 3: does not match 5.
arr[3] = 5: matches 5, so mark visited[3] = true, and increment count.
arr[4] = 2: does not match 5.
arr[5] = 5: matches 5, so mark visited[5] = true, and increment count.
The count for 5 is 3 (positions 0, 3, 5).

Output: 5 3.

Updated visited array: [false, false, false, true, false, true].

Iteration 2 (i = 1):
arr[1] = 2.

It has not been processed (visited[1] == false), so we start counting occurrences of 2.

Inner loop:
arr[2] = 3: does not match 2.
arr[3] = 5: already processed (visited[3] = true).
arr[4] = 2: matches 2, so mark visited[4] = true, and increment count.
arr[5] = 5: already processed (visited[5] = true).
The count for 2 is 2 (positions 1, 4).

Output: 2 2.

Updated visited array: [false, false, false, true, true, true].

Iteration 3 (i = 2):
arr[2] = 3.

It has not been processed (visited[2] == false), so we start counting occurrences of 3.

Inner loop:
arr[3] = 5: already processed.
arr[4] = 2: already processed.
arr[5] = 5: already processed.
The count for 3 is 1 (position 2).

Output: 3 1.

Updated visited array: [false, false, false, true, true, true].

Iterations 4, 5, and 6 (i = 3, 4, 5):
These elements (arr[3] = 5, arr[4] = 2, arr[5] = 5) have already been processed (visited[i] == true), so they are skipped.

Outer loop: runs n times (for each element).
Inner loop: in the worst case, also runs n times for each element (because it compares with all remaining elements).
Hence, the overall time complexity is O(n^2), which can be inefficient for large arrays.
Time Complexity: O(N*N)

Space Complexity:  O(N)

*/
{
    // Create a vector to keep track of processed elements
    vector<bool> visited(n, false);

    cout << "Element -> Frequency" << endl;  // Output header for clarity

    for (int i = 0; i < n; i++) {
        // Skip this element if it has already been processed
        if (visited[i])
            continue;

        // Initialize the count for the current element
        int count = 1;

        // Traverse the rest of the array to count occurrences of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;  // Mark the element as processed
                count++;  // Increase the count for this element
            }
        }

        // Print the element and its frequency in a clear format
        cout << "Element " << arr[i] << " appears " << count << " time(s)." << endl;
    
    }
}

//Solution 2: Using Map
void Frequency(int arr[],int n){
    // Problems/Hashing/104.jpg
    unordered_map<int, int> mapp;
    cout << "Element -> Frequency" << endl;  // Output header for clarity
    for (int i = 0; i < n;i++){
        mapp[arr[i]]++;
        }
    for(auto x:mapp){
        // Print the element and its frequency in a clear format
        cout << "Element " << x.first << " appears " << x.second << " time(s)." << endl;
        }
// Time Complexity: O(N)
// Space Complexity: O(n) where n is the number of elements in the array.

    }

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Output the array elements for clarity
    }
    cout << endl << "--------------\n";

    // countFreq(arr, n);  // Call the frequency counting function
    Frequency(arr, n);
    return 0;
}