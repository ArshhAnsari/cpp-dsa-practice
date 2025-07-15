/* C++ Program to Print a Number Box Pattern with Spacing for Border Numbers 
    It prints a box pattern where the border numbers are displayed with proper spacing to accommodate two-digit numbers, 
    while the inner rectangle is filled with spaces.

    Enter the number of rows: 4
    Enter the number of columns: 7
 1 2 3 4 5 6 7
 1           7
 1           7
 1 2 3 4 5 6 7

*/
#include <iostream>
using namespace std;

int main() {
    int num, col;
    cout << "Enter the num: ";
    cin >> num;
    cout << "Enter the col: ";
    cin >> col;

for (size_t i = 1; i <= num; i++) {
    for (size_t j = 1; j <= col; j++) {
        if (i == 1 || i == num || j == 1 || j == col) {
            // For border numbers, consider proper spacing
            if (j >= 10) {
                cout << j;
            } else {
                cout << " " << j;
            }
        } else {
            cout << "  "; // Two spaces for the inner rectangle
        }
    }
    cout << endl;
}

/* *************************************************************** */

/* C++ Program to Print an Even-Odd Number Box Pattern
    Enter the number of rows: 4
Enter the number of columns: 7
1212121
2121212
1212121
2121212

*/

/*
 #include<iostream>
 using namespace std;
 
 int main(){
    int row, col;
    const char even = '1';
    const char odd = '2';
    cout << "Enter the row: ";
    cin >> row;
    cout << "Enter the column: ";
    cin >> col;
    for (int i = 1; i <= row;i++)
    {
        for (int j = 1; j <= col;j++){
        if (((i+j)%2)==0)
        {
            cout << even;
        }
        else{
            cout << odd;
        }
        }
        cout << endl;
    }

        return 0;
 }
*/ 

/* ------------------------------------------------------------------------------------------------- */

/* C++ Program to Print a Number Pyramid
    Enter the number: 5
1
12
123
1234
12345
*/

/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number :";
    cin >> num;

    for (size_t i = 1; i <= num; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
} */

/* ------------------------------------------------------------------------------------------------- */

/* C++ Program to Print a Number Pyramid with Half-Reverse Numbers
    Enter the number: 5
    1
   121
  12321
 1234321
123454321
*/

/*
#include<iostream>
using namespace std;

int main()
    {
    int num;
    cout << "Enter the nimber:";
    cin >> num;
    for (size_t i = 1; i <= num; i++)
    {
        for (size_t j = 1; j <= (num-i); j++)
        {
            cout << " ";
        }
        for (size_t j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (size_t j =(i-1); j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        
    }

    return 0;
}
*/

/* ------------------------------------------------------------------------------------------------  */

/* C++ Program to Print a Hollow Pyramid Pattern
    Enter the number: 5
    1
   2 2
  3   3
 4     4
555555555
*/
/*
#include<iostream>
using namespace std;

int main()
    {
        int num;
        cout << "Enter the nimber:";
        cin >> num;

        for (int i = 1; i <= num;i++)
        {
            for (size_t j = 1; j <= num-i; j++)
            {
                cout << " ";
            }
            for (size_t j=1 ; j <= 2 * i - 1; j++)
            {
            if(j==1||j==2*i-1||i==num)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
            }
            cout << endl;
        }

        return 0;
}
*/

/* ------------------------------------------------------------------------------------------------- */

// C++ Program to Print a Hollow Pyramid Pattern with Variable Width
/*
This C++ program allows the user to input the number of rows and then prints a hollow pyramid pattern where the row numbers are displayed with proper spacing, 
even when the number of rows exceeds 10.

Enter the number of rows: 15
               1
              222
             33333
            4444444
           555555555
          66666666666
         7777777777777
        888888888888888
       99999999999999999
      10101010101010101010
     1111111111111111111111
    121212121212121212121212
   13131313131313131313131313
  1414141414141414141414141414
 151515151515151515151515151515

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    // Determine the width required for each column based on the maximum row number
    int max_width = 1;
    int max_row = num * 2 - 1;
    while (max_row > 0) {
        max_row /= 10;
        max_width++;
    }

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= (num - i); j++) {
            // Print spaces for left alignment
            cout << setw(max_width) << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == num) {
                // Print row numbers with proper spacing
                cout << setw(max_width) << i;
            } else {
                // Print spaces between row numbers
                cout << setw(max_width) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}