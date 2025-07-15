#include <iostream>
using namespace std;

// Pass by value
void Addbyvalue(int a){
    cout << "The value pass in formal parameter:"<< a << endl;
    cout << "The value change in the formal parameter:"<<(a + 5) << endl;
    }

// Pass by reference
void addbyreference(int &b){
    cout << "The value pass in formal parameter:"<< b << endl;
    b += 8;
    cout << "The value change in the formal parameter:" << b << endl;
    }

// Swaping the number using pass by reference
void swapbyreference(int &m,int &n){   
    int temp = m;
    m = n;
    n = temp;
    cout << "The value of num3: " << m << endl
         << "The value of num4: "
         << "" << n << endl;
    }

// Swaping the number using pass by value
void swapbyvalue(int m,int n){   
    int temp = m;
    m = n;
    n = temp;
    cout << "The value of num3: " << m << endl
         << "The value of num4: "
         << "" << n << endl;
    }

// Swaping the number using pass by address
void swapbyadress(int*x,int*y){
int temp = *x;
    *x= *y;
    *y = temp;
    cout << "The value of num3: " << *x << endl
         << "The value of num4: "
         << "" << *y << endl;
    }

int main() {

    cout << "Pass by Value:" << endl;
    int num1 = 10;
    Addbyvalue(num1);
    cout << "->The value of actual parameter after Pass by Value fxn:"<<num1<<endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Pass by Reference:" << endl;
    int num2 = 10;
    addbyreference(num2);
    cout << "->The value of actual parameter after Pass by Reference fxn:"<<num2<<endl;
    cout << "-----------------------------------------------------" << endl;

    // Swap function

    int num3 = 5;
    int num4 = 6;
    cout << "The swapped values are:" << endl;
    
    swapbyreference(num3, num4);
    //swapbyvalue(num3, num4);
    //swapbyadress(&num3, &num4);

    //cout << "->The actual parameters after swapping by-address :" << num3 << "," << num4;
    //cout << "->The actual parameters after swapping by-value :" << num3 << "," << num4;
    cout << "->The actual parameters after swapping by-reference :" << num3 << "," << num4;
    return 0;
} 