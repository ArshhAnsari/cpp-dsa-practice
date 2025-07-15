#include <iostream>
using namespace std;

template<class T>
class Arthimetic
{
private:
    T a;
    T b;
    public:
        Arthimetic(T a, T b);
        T add();
        T sub();
};
template <class T>
Arthimetic<T>::Arthimetic(T a,T b)
{
    this->a = a;
    this->b = b;
/*
Without 'this', the assignment a = a; would be ambiguous because both the 
local parameter and the member variable have the same name.
Using this clarifies that you are assigning the values to the member variables of the current object. 
'this->a = a;' ensures that the member variable a of the current object is assigned the value of the local parameter a. 
It's a way to differentiate between local and member variables when they have the same name.
*/
}
template<class T>
T Arthimetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template<class T>
T Arthimetic<T>::sub()
{
     T c;
    c = a - b;
    return c;
}

int main() {
    Arthimetic<int> A(10, 5);
    cout << "The sum is: " << A.add() << endl;
    Arthimetic<float> A1(15.25, 4);
    cout << "The sub is: " << A1.sub() << endl;
    return 0;
}
// NOTE:
/* 
   Difference between the Arithmetic and Rectangle Constructors:

   - Both constructors serve as the initialization point for their respective classes.

   - In the Arithmetic constructor, 'this->a = a;' and 'this->b = b;' are used to assign 
     the values of the local parameters 'a' and 'b' to the member variables 'a' and 'b'
     of the current object.

   - In the Rectangle constructor, 'Length = l;' and 'Breadth = b;' directly assign the
     values of the local parameters 'l' and 'b' to the member variables 'Length' and 
     'Breadth' of the current object.

   - The usage of 'this' in the Arithmetic constructor is necessary to disambiguate 
     between local parameters and member variables with the same names.

   - In contrast, the Rectangle constructor does not use 'this' because the member 
     variables have different names from the local parameters.

   - In summary, both constructors achieve the task of initializing the member variables 
     of their respective classes with the provided values, but the usage of 'this' in the 
     Arithmetic constructor is specific to resolving naming conflicts.
*/
