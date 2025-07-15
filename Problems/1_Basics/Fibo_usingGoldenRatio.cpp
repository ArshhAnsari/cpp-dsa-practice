#include <iostream>
#include <cmath>
using namespace std;

long long int fiboFormula(long long int n){
    return pow((1 + sqrt(5)) / 2, n) / sqrt(5);
    // In this " (pow((1 + sqrt(5)) / 2, n)-pow((1 - sqrt(5)) / 2, n)) / sqrt(5) " the term "pow((1 - sqrt(5)) / 2, n)" is 
    // less dominating as n->infinity this will be close to zero.
    }

int main() {
    long long int num;
    cout << "Enter the value of n to perform Fibonacci calculations: ";
    cin >> num;
    long long int result = fiboFormula(num);
    cout << result;
    return 0;
}