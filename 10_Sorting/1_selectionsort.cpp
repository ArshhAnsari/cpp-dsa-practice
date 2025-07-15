#include <iostream>
#include <algorithm>
using namespace std;

void selectionsort (int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex] )
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
    }

int main() {
    int n = 5;
    int arr[5] = {2, 6, 3, 1, 5};
    selectionsort(arr, n);
    for(auto it : arr)
        cout << it << " ";
    return 0;
}
