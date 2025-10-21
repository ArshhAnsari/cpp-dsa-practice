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

bool isPrime(int num) {
    
    if (num <= 1) {
        return false; // 1 and non-positive numbers are not prime
    }
    if (num == 2) {
        return true; // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // All other even numbers are not prime
    }

    // We start at 3 and increment by 2 (i += 2)
    for (int i = 3; i <= sqrt(num); i += 2) {
        // If a divisor is found, it's not prime
        if (num % i == 0) {
            return false;
        }
    }

    // If the loop completes without finding any divisors, the number is prime
    return true;
}
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    //prime_no(num); //T.C -> O(n)
    // prime_num(num); //T.C -> O(sqrt(n))
    (isPrime(num)) ? cout << num << " is a Prime Number!" << endl : cout << num << " is not a Prime Number!" << endl; // T.C -> O(√n)
/* This is the most efficient of the three. 
- It first eliminates all even numbers (except 2) in a single step, which is very fast.
- Like the second function, its loop only goes up to sqrt(num).
- Crucially, it skips all even numbers in its loop by using i += 2. This means it performs roughly half the number of iterations as the second function.*/
    return 0;
}