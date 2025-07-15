#include <iostream>
#include<queue>
using namespace std;

int main() {
    //max heap
    priority_queue<int> maxi;
    
    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(10);
    maxi.push(2);
    maxi.push(5);

    mini.push(4);
    mini.push(5);
    mini.push(3);
    // Display and remove elements from the max-heap
    int m = maxi.size();
    for (int i = 0; i < m; i++)
    {
        cout << maxi.top()<<" ";
        maxi.pop();
    }cout << endl;
    /*
    cout << "Max-Heap elements (from largest to smallest): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    */
    
    // Display and remove elements from the min-heap
    int n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top()<<" ";
        mini.pop();
    }cout << endl;
    /*
    cout << "Min-Heap elements (from smallest to largest): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    */

    return 0;
}