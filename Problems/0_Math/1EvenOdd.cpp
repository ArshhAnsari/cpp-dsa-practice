#include <iostream>
using namespace std;

void evenodd(int n){ 
    if (n&1==1)
    {
        cout << "Odd number";
    }
    else
        cout << "Even number";
    }

int main() {
    int num;
    cin >> num;
    evenodd(num);
    return 0;
}