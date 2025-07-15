#include <iostream>
using namespace std;

struct Rectangle
{
    int Length;
    int Breadth;
};

//This indicates that the function will return a pointer (*) to a structure of type Rectangle.
struct Rectangle*fun(){
    // A pointer p of type struct Rectangle is declared.
    //This pointer will be used to store the memory address of a dynamically allocated Rectangle structure.
    
    struct Rectangle *p;
    p = new Rectangle;
    p->Length = 15;
    p->Breadth = 21;
    return p;
    /* The function returns the pointer p, which now points to the dynamically allocated and initialized Rectangle structure.
    This allows the caller (in this case, the main function) to access and use the created structure.*/
    }

int main() {
    Rectangle *ptr = fun(); //The fun function is called, and it returns a pointer to the dynamically allocated Rectangle structure. The returned pointer is stored in the variable ptr.
    cout << ptr->Length << "," << ptr->Breadth;
    delete ptr;
    return 0;
}
/*
+-----------------------+
|   Stack (main)        |
+-----------------------+
| ptr (points to heap)  |
+-----------------------+

+-----------------------+
|   Stack (fun)         |
+-----------------------+
| p (points to heap)    |
+-----------------------+

+-----------------------+
|   Heap                |
+-----------------------+
| Rectangle structure   |
|   - Length: 15        |
|   - Breadth: 21       |
+-----------------------+
*/