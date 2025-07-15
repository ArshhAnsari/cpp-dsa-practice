/* find the sum of all the following series
s=1-2+3-4+5....n 
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int result = 0;

    for (size_t i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            result = result - i;
        }
        else
        {
            result += i;
        }
        
    }
    cout << "The result is " << result << endl;

    return 0;
}
*/

/* factorial */

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int factorial = 1;

    for (size_t i = 1; i <= n; i++)
    {
        factorial *= i;

    }
    cout << "The factorial of the given number is: "<<factorial;

    return 0;
}
*/

/*given 2 numbers a and b. find a raise to the power b. */
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main(){
    long double a, b;
    long double power;
    cout << "Enter the number for base: ";
    cin >> a;
    cout << "Enter the number for base raised to the power: ";
    cin >> b;

    power = pow(a, b);
    cout << "Base raised to the power of exp(" << a << ")"
         << "^" << b << ":" << power;
    return 0;
}