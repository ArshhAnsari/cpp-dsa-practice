#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);

    cout << "Deque elements: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    dq.pop_back();
    dq.pop_front();

    cout << "Deque size after pops: " << dq.size() << endl;
    
    // Other useful functions (similar to vector):
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
    return 0;
}
