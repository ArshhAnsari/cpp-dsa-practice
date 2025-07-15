#include <iostream>
using namespace std;
// Function prototype
//  type function-name(arguments);
//int sum(int a, int b); // acceptable
//int sum(int a,  b); // not acceptable
int sum(int, int);  // acceptable
void g();

int main() {
    int num1, num2;
    cout << "Enter the numbers :";
    // num1 and num2 are Actual parameters.
    cin >> num1 >> num2;
    cout << "The sum of the numbers are: " << sum(num1, num2) << endl;
    g();
    return 0;
}

int sum(int a, int b){
    // Formal parameters a and b will be taking values from Actual parameters.
    int add = a + b;
    return add;
}
void g(){
    cout << "Hello world!";
}