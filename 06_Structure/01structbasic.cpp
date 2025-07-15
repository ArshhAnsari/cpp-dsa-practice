#include <iostream>
using namespace std;

    struct employee
    {
        /*  A struct is a composite data type in C++ that allows you to group together variables of different data types under a single name.
            Each member within a struct has its own memory space, and the memory for each member is allocated separately.
            The size of a struct is the sum of the sizes of its individual members, including any padding added for alignment.
            Structs are used for data encapsulation, allowing you to group related data together and represent complex objects or records.
            By default, struct members have public access, meaning they can be accessed directly from outside the struct
            However, C++ also supports access control modifiers like private and public for struct members.
            */

        int eId;
        char favletter;
        long int salary;
    };
    
     union data
     {
        /* All members of a union share the same memory space, meaning they have the same starting memory address.
            The size of a union is determined by the size of its largest member to ensure it can accommodate the largest possible type.
            Since only one member can hold a value at a time, using a different member will overwrite the current value.
            Unions are often used when you need to represent a single value that can be of different types at different times. 
            For example, you might use a union to represent a variable that can hold either an integer, a floating-point number, or a character.
            */

        int money;
        char alphabet;
        float percentage;
     };
     
int main() {
        struct employee hussain={121,'b',1200000};
        cout << hussain.salary<<"\n";
        cout << hussain.favletter<<"\n";

        union data num1;
        num1.money = 940;
        num1.alphabet = 'u';
        cout << "This will throw the garbage value"
             << "'" << num1.money << "'"
             << "since the new value is assigned and in-use in the data" << endl;
        cout << num1.alphabet << endl;

        cout<< sizeof(employee)<< "\t"<< sizeof(data);
        /*
        The sizeof operator returns the size of the 'employee' struct and 'data' union in bytes.
        Padding is added for memory alignment. The struct has a theoretical size of 13 bytes (sum of member sizes),
        but due to alignment, the actual size is 12 bytes.
        */
        return 0;
}