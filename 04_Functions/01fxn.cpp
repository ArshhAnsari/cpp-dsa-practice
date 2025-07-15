#include <iostream>
using namespace std;

// Function are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code muliple times
// void -> which deos not returns anything (No Return, No Parameters)
// return -> It simply returns 
// parameterised
// non-parameterised


void voidname(){
    // This function does not have any parameters in its declaration
    // 'voidname' is a non-parameterized function.
    cout << "My name is Arsh!" << endl;
}

void printName(string name){
    //  This function takes one parameter of type string named name in its declaration
    // 'printName' is a parameterized function that takes a string parameter.
    cout << "My name is " << name << "!" << endl;
}

int sum(int num1, int num2){
    int add = num1 + num2;  // local variable 'add' , it calculates the sum of the twp input integers.
    /* Every function with a return type should have a 'return' statement that returns a value of that type.
       the return statement ensures that the computed sum is returned as an integer, which matches the return type specified in the function signature (int).
       This allows you to use the result of the function when you call it.
       */
    return add;
    /*  When you call this function with two integer arguments, such as sum(5, 7), the following happens:
        num1 is assigned the value 5.
        num2 is assigned the value 7.
        Inside the function, add is calculated as the sum of num1 and num2, which is 5 + 7, resulting in 12.
        The return statement returns the value 12 as the result of the function.
    */
    }
void addt(int nums1, int nums2){
    int res = nums1 + nums2;
    cout << res;
    }

/* ------------------------------------------------------------------------------------------ */

int main() {

    voidname();

    string name;
    getline(cin, name);
    printName(name);

    // Take two numbers and add its sum

    // ----->>>>> Using 'Return' in a function to return the result when it is called
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2);    // Calling the function and storing the result in 'result'
    cout << result << endl;

    // ----->>>>> Simply calling the function
    int nums1, nums2;
    cin >> nums1 >> nums2;
    addt(nums1, nums2);
    return 0;
}