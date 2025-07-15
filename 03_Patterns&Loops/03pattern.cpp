#include<iostream>
using namespace std;
// C++ Program to Print a Right Triangle of Asterisks
/*
    Enter the number: 4
Ascending Right Triangle:
*
**
***
****

Descending Right Triangle:
****
***
**
*

*/

void ascendingtri(int n){
    for (size_t i = 1; i <=n; i++)
    {
        for (size_t j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void descendingtri(int n){
    for (size_t i = 1; i <=n; i++)
    {
        for (size_t j = 1; j <=(n-i+1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void zero1(int n){
    int start = 1;
    for (int i = 0; i < n ; i++)
    {
        if (i%2==0)
            start = 1;
            else
            start = 0;
            for (int j = 0; j <= i; j++)
            {
            cout << start;
            start = 1 - start;
            }
            cout << endl;
    }
    
}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    //descendingtri(n);
    //ascendingtri(n);
    zero1(n);
    return 0;
}