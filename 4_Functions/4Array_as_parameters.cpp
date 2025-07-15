#include <iostream>
using namespace std;

void fun(int A[],int n){
    cout << "[";
    for (size_t i = 0; i < n; i++)
    {
        cout << A[i]; // Output each element of the array
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
        cout << "]";
    }

/* In the context of the function, A is a pointer, and A[i] is equivalent to *(A + i), 
which means "the value at the memory location A + i".
This is how array subscript notation works in C++
*/
    
int main() {
    int A[5] = {11, 12, 13, 14, 15};
    for (int x : A) // for-each loop
        cout << x << " ";
    cout << endl;
    fun(A, 5);  
    //Parameter 'A' behaves like a pointer to its first element of the array passed when passed to the function.
    return 0;
}