#include <iostream>
using namespace std;

struct Rectangle
{
    int Length;
    int Breadth;
};

// Function to initialize a Rectangle structure with given values
void initialize(struct Rectangle *r,int l,int b){
    r->Length = l;
    r->Breadth = b;
}
// Function to calculate the area of a Rectangle structure
int area( struct Rectangle r){
    return r.Length * r.Breadth;
}
void changeparameter(struct Rectangle *r,int L){
    r->Length = L;  // Change the Length attribute of the provided Rectangle variable
    cout << "The changed parameters: "<<r->Length<<","<<r->Breadth;
}
int main() {
    Rectangle r;
    initialize(&r, 10, 5);
    cout << "The initial value assigned to struct Rectangle: " << r.Length << "," << r.Breadth << endl;
    cout << "The area of the rectangle:" << area(r) << endl;
    changeparameter(&r, 25);
    return 0;
}