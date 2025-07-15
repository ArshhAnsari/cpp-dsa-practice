#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int *ptr = &a;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << *(arr+1)<<endl; //Since array is continously allocated it moves to next element of the array

    int *ptr2;
    int *ptr3 = ptr2 + 2;
    cout << ptr3 - ptr2; // Subtracting two pointers gives the number of elements between them
    return 0;
}