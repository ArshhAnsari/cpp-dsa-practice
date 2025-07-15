#include <iostream>
using namespace std;

int main() {

    int A[5]    /* ->declaration */ = {12, 34, 44, 54, 33};    // ->values stored at locations
    cout << A[0] << endl;   //this will print the array's first element
    A[3] = 9;   //the value at 3 changed from 54 -> 9
    cout << A[3] << endl;
/*
    //can also declaration in this way.
    int math_number[3];
    math_number[0] = 1;
    math_number[1] = 91;
    cout << math_number[1] << endl;
*/

/*  
    //using loops for printing the elements of array:
    int marks[5];
    cout << "enter the numbers : ";
    for (size_t i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    cout << "the entered numbers are: ";
    for (size_t i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
*/  
    
    /*

    There is also a "for-each loop"(introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array
    for (type variableName : arrayName) {
        // code block to be executed
    }
    
    */
    for(int i:A)
    {
        cout << i<<"\n";    /* It iterates over each element in the container A and assigns each element to the variable i */
    }

    return 0;
}