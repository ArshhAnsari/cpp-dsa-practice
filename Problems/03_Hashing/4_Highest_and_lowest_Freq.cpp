#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

//Solution no: 1
void countFreq(int arr[], int n) {
    // Create a vector to keep track of processed elements
    vector<bool> visited(n, false);

    // Variables to store the element with highest and lowest frequency
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxElem, minElem;

    cout << "Element -> Frequency" << endl;

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

        // Output the element and its frequency
        cout << arr[i] << " -> " << count << endl;

        // Update maxFreq and minFreq
        if (count > maxFreq) {
            maxFreq = count;
            maxElem = arr[i];
        }
        if (count < minFreq) {
            minFreq = count;
            minElem = arr[i];
        }
    }

    cout << endl;
    // Output the element with highest and lowest frequency
    cout << "Element with the highest frequency: " << maxElem << " (" << maxFreq << " times)" << endl;
    cout << "Element with the lowest frequency: " << minElem << " (" << minFreq << " time(s))" << endl;

// Time Complexity: O(N*N), where N = size of the array. We are using the nested loop to find the frequency.
// Space Complexity:  O(N), where N = size of the array. It is for the visited array we are using.
}

//Solution no: 2
void freq(int arr[], int n) {
    unordered_map<int, int> mapp;

    // Fill the unordered_map with frequencies
    for (int i = 0; i < n; i++) {
        mapp[arr[i]]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int MaxElm = 0;
    int MinELm = 0;

    // Traverse the map to find the element with max and min frequency
    for (auto it : mapp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            MaxElm = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            MinELm = it.first;
        }
    }

    cout << "Element with max frequency: " << MaxElm << " (Frequency: " << maxFreq << ")" << endl;
    cout << "Element with min frequency: " << MinELm << " (Frequency: " << minFreq << ")" << endl;

// Time Complexity: O(N), where N = size of the array. The insertion and retrieval operation in the map takes O(1) time.
// Space Complexity:  O(N), where N = size of the array. It is for the map we are using.
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Output the array elements for clarity
    }
    cout << endl << endl;

    //countFreq(arr, n);  // Call the frequency counting function
    freq(arr, n);  // Call the frequency counting function
    return 0;

}
/*
Purpose of INT_MIN and INT_MAX:

INT_MIN: This represents the smallest possible integer value (a very large negative number). 
We use it to initialize maxFreq because we want to find the maximum frequency. 
Any real frequency from the array will be larger than INT_MIN, so it helps us start the comparison.

INT_MAX: This is the largest possible integer value. 
We initialize minFreq to this because we are looking for the smallest frequency. 
Any actual frequency will be smaller than INT_MAX, making it useful for finding the minimum.

How It Works:
maxFreq starts at INT_MIN: This means we're setting the lowest possible value, so that any frequency we find will be higher and can replace it.
minFreq starts at INT_MAX: We're setting the highest possible value, so any actual frequency will be smaller and replace it.

Key Variables:
maxElem: Stores the element that appears the most times in the array.
minElem: Stores the element that appears the least times in the array.

Example Walkthrough:
For the array {10, 5, 10, 15, 10, 5}, here’s what happens:

Count the frequency of each element:

10 appears 3 times.
5 appears 2 times.
15 appears 1 time.

Tracking maximum frequency (maxFreq):
maxFreq starts at INT_MIN. As we count the elements, we see that 10 appears 3 times, which is greater than INT_MIN, 
so we update maxFreq to 3 and set maxElem to 10.

Tracking minimum frequency (minFreq):
minFreq starts at INT_MAX. As we count the elements, we find that 15 appears 1 time, which is less than INT_MAX, so we update minFreq to 1 and set minElem to 15.

Final Output:
maxElem = 10 (because 10 appears the most with 3 occurrences).
minElem = 15 (because 15 appears the least with 1 occurrence).

*/