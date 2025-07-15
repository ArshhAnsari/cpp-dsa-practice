//operators

#include<iostream>
using namespace std;

int main(){
    int a=10, b=20 ;
    cout<<"This are arthimetic operators"<<endl;

    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;

    cout<<"This are comparision operators"<<endl;
    cout<<"the value of a<b :"<<(a<b)<<endl;
    cout<<"the value of a>b :"<<(a>b)<<endl;
    cout<<"the value of a<=b :"<<(a<=b)<<endl;
    cout<<"the value of a>=b :"<<(a>=b)<<endl;
    cout<<"the value of a!=b :"<<(a!=b)<<endl;
    cout<<endl;

    cout<<"This are logical operators"<<endl;
    cout<<"The value of (a==b)&&(a<b) :"<<((a==b)&&(a<b))<<endl;
    cout<<"The value of (a==b)||(a<b) :"<<((a==b)||(a<b))<<endl;

    //literals
    // Initializing a float variable 'f' with the value 3.14f. The 'f' suffix indicates that the literal is of type float.
    float f = 3.14f;

    // Initializing a long double variable 'd' with the value 31.4.
    // The absence of a suffix means that the literal is considered to be of type double, but it is assigned to a long double variable.
    long double d = 31.4;

    // Printing the value of the float variable 'f'.
    cout << "The value of the float variable 'f' is: " << f << endl;

    // Printing the value of the long double variable 'd'.
    cout << "The value of the long double variable 'd' is: " << d << endl;

    // Prints the size (in bytes) of the literal 3.14.
    // By default, floating-point literals without a suffix are considered to be of type double.
    // The sizeof operator is used to determine the size.
    cout << "The size of the literal 3.14 (defaulted to double) is: " << sizeof(3.14) << " bytes" << endl;

    // Printing the size (in bytes) of the literal 3.14f.
    // This time, the 'f' suffix explicitly specifies that the literal is of type float.
    cout << "The size of the literal 3.14f (explicitly float) is: " << sizeof(3.14f) << " bytes";
return 0;
} 