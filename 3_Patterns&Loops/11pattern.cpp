#include <iostream>
using namespace std;

/* 
    Enter an odd number: 5
  *  
  *  
*****
  *  
  *  

*/
void crosspattern(int n)
{
if (n%2==0)
    {
        cout << "Enter the odd number for input! :~)";
    }
    else
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (j==n/2)
                {
                    cout << "*";
                }
                    else if (i==n/2)
                    {
                        cout << "*";
                    }
                        else 
                        {
                            cout << " ";
                        }
            }
            cout << endl;
        }
    
}

void hollowsquare(int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++)
        {
            if (i==0||i==n-1||j==0||j==n-1)
            {
                cout << "*"<<" ";
            }
            else cout << "  ";
        }
        cout << endl;
        
        }
    }

int main() {
    int n ;
    cout << "Enter the number: ";
    cin >> n;
    //crosspattern(n);
    hollowsquare(n);
    return 0;
}