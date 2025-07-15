// C++ Program to Print a Square Pattern of Asterisks
//  ****
//  ****
//  ****
//  ****

#include<iostream>
using namespace std;

int main(){
    //int i;
    for (int i = 1; i < 5; i++)
    {
        for (size_t j = 1; j < 5; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    
    return 0;
}