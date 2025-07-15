#include<iostream>
using namespace std;

/* Alphabet triangle

Enter the number for alphabet pyramid: 5
A 
A B 
A B C 
A B C D 
A B C D E 

*/
void alphatriangle(int n){
    char ch = 'A';
    for (size_t i = 0; i < n; i++)
    {
            //for (char ch = 'A'; ch <= 'A' + i; ch++)
            for (size_t j = 0; j <= i; j++) //^^
            {
                cout << char(ch + j) << " ";
            }
        cout << endl;
    }
    
}
/*
Enter the number for alphabet pyramid: 5
E 
D E 
C D E 
B C D E 
A B C D E 
PS C:\User
*/
void alphatriangle2(int n){
        for (size_t i = 0; i < n; i++)
        {
            for (char ch = 'E' - i; ch <= 'E';ch++)
            {
                cout << ch << " ";
            }
            cout << endl;
        }
        
    }



/* **********Alphabet pyramid********** 

Enter the number for alphabet pyramid: 5
      A
     ABC
    ABCDE
   ABCDEFG
  ABCDEFGHI
 ABCDEFGHIJK

*/
void pattern(int n){
    char ch = 'A';

    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= n-i; j++)
        {
            cout << " ";
        }
        for (size_t j = 0; j <= 2*i; j++)
        {
            cout << char(ch + j);
        }
        cout<<endl;
    }

    }

void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        // Print the left side of the pattern including the middle character
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }
        
        // Print the right side of the pattern
        ch -= 2;
        for (int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }
        
        // Move to the next line
        cout << endl;
    }
}


/* **********Alphabet Diamond********** 
Enter the number for alphabet pyramid: 5

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A

*/
void alphabetdiamonds(int n){
           // upper trinagle loop
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for (size_t j = 1; j <= 2*i-1; j++)
        {
            cout << char('A' + (j-1));

        }
        cout<<endl;
    }
    
    // lower triangle loop
    for (size_t i = n + 1; i <= 2 * n - 1; i++)
    {
        int spaces = i - n;
        for (size_t j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (size_t j = 1; j <= 2 * (2 * n - i) - 1; j++)
        {
            cout << char('A' + (j - 1));
        }
        cout << endl;
    } 

    }


int main(){
    
    int n;
    cout << "Enter the number for alphabet pyramid: ";
    cin >> n;
    //alphatriangle(n);
    //alphabetdiamonds(n);
    //pattern(n);
    //pattern2(n);
    alphatriangle2(n);

    return 0;
} 