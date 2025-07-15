//hollow square
#include<iostream>
using namespace std;

/*
Enter the rows: 5
Enter the columns: 7

*******
*     *
*     *
*     *
*******             */

int main(){
    int rows, cloumns;
    cout << "Enter the rows :";
    cin >> rows;
    cout << "Enter the cloumns:";
    cin >> cloumns;
    for (size_t i = 1; i <=rows; i++)
    {
        for (size_t j = 1; j <=cloumns ; j++)
        {
            if (i==1||i==rows||j==1||j==cloumns)
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
    
    return 0;
}