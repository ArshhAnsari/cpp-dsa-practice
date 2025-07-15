#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 8, 9};  // arr is actually a pointer to the first element

    // Print the address of the first element in the array
    cout << "1. Address of first element (arr): " << arr << endl;

    // Dereference 'arr' to get the value at the first element
    cout << "2. First element value (*arr): " << *arr << endl;
    
    int A[5] = {1, 8, 3, 4, 5};

    // Declare a pointer 'p' and point it to the first element of array 'A'.
    int *p = A;// A decays to &A[0]

    // Loop to print all elements of the array using pointer 'p'
    cout << "3. Elements of array A using pointer p:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << p[i] << endl;
        // Alternative: cout << "Element " << i << ": " << *(p + i) << endl;
    }
    
    return 0;
}
    /*
        when you use an array name in a context where a pointer is expected (such as when initializing a pointer), the array name is automatically converted to a pointer to its first element.
        So, in the line int *p = A;, p is assigned the address of the first element of array A.
        In the subsequent loop, when you access p[i], it's equivalent to *(p + i), which means you are dereferencing the pointer p by adding the offset i.
        The result is that you are accessing the elements of the array through the pointer p.
        So, both A[i] and p[i] effectively give you the same result because array subscript notation A[i] is a shorthand for *(A + i).
        The array name A is implicitly converted to a pointer to its first element.
        In summary, A[i] and p[i] are two different ways of expressing the same thing—accessing elements of the array using a pointer.
    */
   //EXAMPLE FOR BETTER UNDERSTANDING:--
   /*
   Imagine you have a shelf with five colorful books named A.
    You have a magical friend named p who points to the first book on the shelf.
    When you want to know about a book, you ask your friend.
    Saying p[2] is like asking, "What's in the second book?" Your friend magically knows and tells you.
    So, A[2] and p[2] mean the same thing — finding out what's in the second book on the shelf.
    Your friend is just helping you by pointing to the books!
   */