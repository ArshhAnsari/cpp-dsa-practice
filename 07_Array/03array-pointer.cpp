#include <iostream>
using namespace std;

int main() {
    int num[4] = {2, 45, 78, 88};
    int *p = num;
    
    //cout << "the value at[0]: " << *p<<endl;
    //cout << "The value at [1]: " << *(p+1);

    for (size_t i = 0; i < 4; i++)
    {
        cout << "the value at positions " << "["<<i<<"]" << "is: " << *(p + i) << endl;
    }
    
    cout << *(p++) << endl;
    cout << *(++p);
    return 0;
}