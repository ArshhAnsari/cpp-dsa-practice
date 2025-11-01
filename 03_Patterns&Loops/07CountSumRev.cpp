// *********count the numbers in a digits**********
/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    int count = 0;
    while (num>0)
    {
        count++;
        num = num / 10;
    }
    cout << "The digits in numbers are " << count;
    return 0;
}
*/

/* **********sum of all the digits in a number********** */

/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int temp = 0;
    int sum = 0;
    while (num>0)
    {
        temp = sum;           // int last_digit = num % 10; sum = sum + lastdigit;
        sum = num % 10;                 
        sum = temp + sum;
        num = num / 10;
        
    }
    cout << "The sum of the numbers is " << sum;
    return 0;
}
*/

/* **********print the reverse of a given number********** */

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int reverse_number = 0;

    while (n>0)
    {
        int reverse = n % 10;
        reverse_number = reverse_number * 10 + reverse;
        n = n / 10;

    }
    cout << "The reverse of the entered no's is " << reverse_number;

    return 0;
}
*/

/* **********check the given number is a palindrome********** */



#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int revnum = 0;
    int originalNum = num;

        for (int j = num; j > 0;j/=10)
        {
            revnum = revnum * 10 + (j % 10);

        }
        if (revnum == originalNum)
        {
            cout << originalNum << " is a palindrome" << endl;
        } else {
            cout << originalNum << " is not a palindrome" << endl;
        }

    return 0;
}


