#include <iostream>
using namespace std;

int modifyArrayAndReturnFirstElement(int arr[],int n)
{
    /* This function is defined with an 'int' return type because it is expected to return an integer value. 
    Specifically, it modifies the first element of the integer array 'arr' by adding 100 to it and then returns the updated value.
    */
    arr[0] += 100;
    int res = arr[0];
    return res;
    
}

void theenteredArray(int arr[],int n){
    cout << "The entered Array = [";
    for (size_t i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter the elements of the array at index " << i << ": ";
        cin >> arr[i] ;
    }
    
    // Print the entered array
    theenteredArray(arr,n);

    // Call the 'modifyArrayAndReturnFirstElement' function to modify the array in-place.
    cout << "Value inside function: " << modifyArrayAndReturnFirstElement(arr, n) << endl;
    // Print the updated value of the first element in the main function.
    cout << "Value inside int-main: " << arr[0];

    return 0;
}