#include <iostream>
using namespace std;
/*
The idea is based on the following two facts. 

 XOR of a number with itself is 0. 
XOR of a number with 0 is number itself.

res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
*/
int findunique(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }
    return unique;
}

int main() {
    int arr[] = { 1, 3, 4, 3, 6, 6 ,1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    cout << findunique(arr, size); // Print the result of findunique
    return 0;
}

/* Brute Force
// One solution is to check every element if it appears once or not. Once an element with a single occurrence is found, return it. 
#include <iostream> 
using namespace std; 

// Function to find the 
int findSingle(int A[], int ar_size) 
{ 

	// Iterate over every element 
	for (int i = 0; i < ar_size; i++) { 

		// Initialize count to 0 
		int count = 0; 

		for (int j = 0; j < ar_size; j++) { 

			// Count the frequency 
			// of the element 
			if (A[i] == A[j]) { 
				count++; 
			} 
		} 

		// if the frequency of the 
		// element is one 
		if (count == 1) { 
			return A[i]; 
		} 
	} 

	// if no element exist at most once 
	return -1; 
} 

// Driver code 
int main() 
{ 
	int ar[] = { 2, 3, 5, 4, 5, 3, 4 }; 
	int n = sizeof(ar) / sizeof(ar[0]); 
	
	// Function call 
	cout << "Element occurring once is "
		<< findSingle(ar, n); 
	
	return 0; 
} 

// Time complexity of this solution is O(n2)
// Auxiliary Space: O(1) as constant space is used.

*/
