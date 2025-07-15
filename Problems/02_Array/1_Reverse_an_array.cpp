#include <iostream>
using namespace std;

void reverseArray(int Arry[], int size) {
    cout << "The reverse of the above Array: [ ";
    for (int i = size - 1; i >= 0; i--) {
        cout << Arry[i] << " ";
    }
    cout << "]";
}

//Using recursion:
void F(int i,int arr[],int size){
    if(i>=size/2)
        return;
    swap(arr[i], arr[size - i - 1]);
    F(i + 1, arr, size);
}

int main() {
    int Arry[5] = {1, 2, 3, 4, 5};
    int size = sizeof(Arry) / sizeof(int);
    cout << "The original array is: [ ";
    
    for(int i:Arry){
        cout << i<<" ";
    }cout << "]";
    cout << endl;
    
    /*cout << "The reverse of the above Array: [ ";
    for (int i = sizeof(Arry) / sizeof(int) - 1; i >= 0; i--) {
        cout << Arry[i] << " ";
    }cout << "]";*/
    
    //reverseArray(Arry, size);
    F(0, Arry, size);

    cout << "Array after reverse: [";
    for(int i:Arry){
        cout << i<<" ";
    }cout << "]";
    cout << endl;

        return 0;
}