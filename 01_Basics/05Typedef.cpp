/*
What is typedef?
typedef (short for type definition) is used in C++ to create an alias (alternative name) for a data type. 
It helps make code more readable, especially when dealing with complex data types like pointers or structures.
*/

//Instead of writing:
/*
#include <iostream>
int main() {
    unsigned int a = 10;
    unsigned int b = 20;
    int c=30;
    std::cout << a << " " << b << std::endl;
    return 0;
}
*/
#include <iostream>
typedef unsigned int uint;
typedef int numbert;

int main() {
    uint a = 10;
    uint b = 20;
    numbert c = 30;
    std::cout << a << " " << b << " " << c << std::endl;
    return 0;
}
