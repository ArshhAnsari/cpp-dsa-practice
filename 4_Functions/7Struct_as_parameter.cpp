#include <iostream>
using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

void area(struct Rectangle r1){
    cout << "The area of rectangle after changed parameters: " << r1.lenght * r1.breadth << endl;
    }

void changeparameter(struct Rectangle*ptr,int b){
    int l = 80;
    ptr->lenght = l; // Using the arrow operator to access and modify the 'lenght'
    ptr->breadth = b;   // Set the 'breadth' to the value passed in (b)
}

int main() {
    Rectangle r = {20, 33};
    cout << "The length and the breadth of the reactangle:" << r.lenght << "," << r.breadth << endl;
    changeparameter(&r,45);
    cout << "The changed length and the breadth of the reactangle is:" << r.lenght << "," << r.breadth << endl;
    area(r); 
}

// README:

// In this code snippet:
// - 'Rectangle' refers to our user-defined structure representing a rectangle with 'length' and 'breadth' members.
// - In the 'area' function, we calculate the area of a rectangle and initialize a local 'Rectangle' variable 'r' with dimensions (20, 33).
// - The 'changeparameter' function takes a pointer to 'Rectangle' as a parameter. This allows us to modify the 'length' and 'breadth'
//   members of a given rectangle through the provided pointer, making it handy for changing the dimensions of a rectangle.

// In summary, 'Rectangle' is our go-to structure, consistently used to represent rectangles, and the 'changeparameter' function
// enables us to dynamically change the dimensions of a 'Rectangle' by providing a pointer to it.

// Issue: Incorrect Struct Declaration
// If you write 'struct r1' instead of 'struct Rectangle r1', the code will not understand r1.length
// because the structure's member names are based on the actual struct definition.
// If you use struct r1, the code will not recognize these member names, 
// and attempting to access them with r1.length or r1.breadth will result in a compilation error.

// Issue: Misleading Pointer Declaration
// If you write struct Pointer* ptr instead of struct Rectangle* ptr,
// it would mean that you are declaring a pointer to a structure named Pointer, not Rectangle.
// This could be confusing and might lead to errors, especially if there is no definition for a structure named Pointer.
// Always use the correct structure name in the pointer declaration to ensure clarity and prevent errors.
