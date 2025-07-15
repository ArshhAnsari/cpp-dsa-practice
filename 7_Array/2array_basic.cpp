#include <iostream>
using namespace std;

int main() {
    int my_number[5] = {12, 45, 85, 44, 8};         //int a[] = {a1,a2,a3,.....,an}
                                                    //cout << sizeof(a)/sizeof(int)
    int getarraylength;
    getarraylength = sizeof(my_number) / sizeof(int);
    cout << getarraylength << endl;

    /*
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)

        //      ***It is better to write:***
        //  for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)  
        
    {
    cout << myNumbers[i] << "\n";
    }
    */

    
    return 0;
}