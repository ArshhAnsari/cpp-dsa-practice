#include <iostream>
using namespace std;

int checkpower(int base, int power){
    int ans = 1;

    while (power!=0)
    {
        if ((power&1)==1)
        {
            ans *= base;
        }
        base *= base;
        power =power >> 1;
        
    }
    return ans;
    }

int main() {
    int base, power;
    cout << "Enter the base and the power: ";
    cin >> base >> power;
    cout << checkpower(base, power);
    return 0;
}