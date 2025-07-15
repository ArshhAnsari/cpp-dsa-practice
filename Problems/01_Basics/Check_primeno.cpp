#include <iostream>
#include <cmath>
using namespace std;
/*
A prime number is defined as a number greater than 1 that has no divisors other than 1 and itself. To check if a number is prime, you should count the number of divisors. 
A prime number should have exactly 2 divisors (1 and itself).
*/
void prime_no(int n){
    int counter = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0){
            counter++;
        }
    }
    
    if(counter==2) cout << "It is a prime number!";
    else
        cout << "It is not a prime number!";
}

void prime_num(int n){
    // If n is less than or equal to 1, it's not a prime number
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return;
    }

    int counter = 0;
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0){
            counter++;
        
        // If n/i is not equal to i, it is also a divisor
        if(n/i !=i)
            counter++;    
        }
    }
    
    if(counter==2) cout << "It is a prime number!";
    else
        cout << "It is not a prime number!";
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    //prime_no(num); //T.C -> O(n)
    prime_num(num); //T.C -> O(sqrt(n))
    return 0;
}