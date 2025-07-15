#include <iostream>
using namespace std;

/* C++ Program to Print a Cross Pattern with Adjustable Center for Even and Odd Numbers
Enter the number: 8
   **  
   **  
   **
********  
********  
   **  
   ** 
   ** 
*/
void cross(int n)
    {
        if (n % 2 == 0)
    {
        // For even 'n', adjust the formula to find the center indices
        int center1 = n / 2;
        int center2 = center1 - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == center1 || i == center2 || j == center1 || j == center2)
                {
                    cout << '*';
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        // For odd 'n'
        int center = n / 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == center || j == center)
                {
                    cout << '*';
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    }

/*
We'll split this pattern into two parts:
The upper part, where the number of stars decreases, and the spaces increase.
The lower part, where the number of stars increases, and the spaces decrease.

  **********
  ****  ****
  ***    ***
  **      **
->*        *
->*        *
  **      **
  ***    ***
  ****  ****
  **********

*/
void hollowdiamondsquare(int n) {
    int space = 0;
    
    // Upper part of the pattern
    for (size_t i = 0; i < n; i++) {
        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    
    int spaces = 2 * n - 2;
    
    // Lower part of the pattern
    for (size_t i = 0; i < n; i++) {
        // Stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

void pyramidX(int n){
    //upper
    int spaces = 2 * n - 2;
    for (int i = 1; i <= n;i++){
        //star
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        //space
        for (int j = 1; j <= spaces;j++){
            cout << " ";
        }
        // star
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
    //lower
    int space = 2;
    for (int i = n + 1; i <= 2 * n - 1;i++){
        //star
        for (int j = 1; j <= (2 * n - i) ;j++){
            cout << "*";
        }
        //space
        for (int j = 1; j <= space;j++){
            cout << " ";
        }
            // star
            for (int j = 1; j <= (2 * n - i) ;j++){
            cout << "*";
        }
            cout << endl;
            space += 2;
    }
}
//Methd2:-
/*
void pyramidX(int n){
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1;i++){
        int stars = i;
        if(i>n)
            stars = 2 * n - i;
        //stars
        for (int j = 1; j <= stars;j++){
            cout << "*";
        }
        //spaces
        for (int j = 1; j <= spaces;j++){
            cout << " ";
        }
        //stars
        for (int j = 1; j <= stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n)
            spaces -= 2;
            else
                spaces += 2;
    }
}
*/
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    //cross(n);
    //hollowdiamondsquare(n);
    pyramidX(n);
    return 0;
}
