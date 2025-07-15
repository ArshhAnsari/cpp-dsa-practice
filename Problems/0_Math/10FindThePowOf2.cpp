#include <iostream>
using namespace std;

void power(int n){
    if ((n & (n-1)) == 0)
    {
        cout << "It is power of 2";
    }
    else
        cout << "It is not power of 2";
    }

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num==0)
    {
        cout << "It not the power of 2";
    }
    else
        power(num);
    
}