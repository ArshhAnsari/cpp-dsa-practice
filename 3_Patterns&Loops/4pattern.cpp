// C++ Program to Print a Pyramid Pattern of Asterisks
/*
    Enter the number: 4
   *
  ***
 *****
*******

Enter the number: 6 //void reverstar
***********
 *********
  *******
   *****
    ***
     *
    
Enter the number: 4 //void pyramidhalf
*
**
***
****
***
**
*


*/
#include<iostream>
using namespace std;
// To print the pyramid in reverse order.

void reversestar(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*n - (2*i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pyramidhalf(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n + 1; i <= 2 * n - 1;i++){
        for (int j = 1; j <= (2 * n - i) ;j++){
            cout << "*";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    pyramidhalf(n);
    //reversestar(n);
    /*
    // To print pyramid pattern.
    for (size_t i = 1; i <=n ; i++)
    {
    // Print leading spaces
        for (size_t j = 1; j <=(n-i); j++)
        {
        cout << " ";
        }
         // Print asterisks
            for (size_t j = 1; j<=(2*i-1); j++)
            {
                cout << "*";
            }
            // Move to the next line
             cout << endl;
    }
    */
    return 0;
}