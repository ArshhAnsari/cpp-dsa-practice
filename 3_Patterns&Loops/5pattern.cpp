// C++ Program to Print a Number Box Pattern
/* boxpattern output:
    Enter the number: 7

    1234567
    2345671
    3456712
    4567123
    5671234
    6712345
    7123456
    
   */
  
/* numbercrown output:

1        1
12      21
123    321
1234  4321
1234554321

*/

/*triangle output:

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/


#include<iostream>
using namespace std;

void boxpattern(int num){
    for (int i = 1; i <=num; i++)
    {
        for (int j = i; j <=num; j++)
        {
            cout << j;
        }
        for (int j = 1; j <=i - 1; j++)
        {
            cout << j;
        }
        
        cout << endl;
    }
}

void numbercrown(int num){
    int space = 2 * (num - 1);
    for (int i = 1; i <= num; i++)
    {   //number
        for (int j = 1; j <= i;j++)
        {
            cout << j;
        }
        //space
        for (int k = 1; k <= space;k++)
        {
            cout << " ";
        }
            // numbers
            for (int j = i; j >= 1; j--)
            {
                cout << j;
            }
    cout << endl;
    space  -= 2;
    }
    
}

void triangle(int num){
    int pnum = 1;
    for (size_t i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {   
            
            cout << pnum<<" ";
            pnum += 1;
        }
            
        cout << endl;
        
    }
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    //boxpattern(num);
    //numbercrown(num);
    triangle(num);
    return 0;
}