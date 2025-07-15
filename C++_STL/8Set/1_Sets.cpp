#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> st;

    // Inserting elements
    st.insert(1);
    st.insert(1); // Duplicates are ignored in a set
    st.insert(4);
    st.insert(2);
    st.insert(4); // Again, duplicate ignored
    st.emplace(3);  // Emplace is similar to insert, but constructs the element in place

    // Display the elements in the set
    for(auto i : st)
        cout << i << " ";
    cout << endl;

    // Finding and erasing elements
    auto it = st.find(6); // Trying to find an element that doesn't exist
    if (it != st.end()) {
        st.erase(it); // Erasing the element if found (not found in this case)
    }

    st.erase(2);  // Directly erase element with value 2

    it = st.find(1);  // Find element with value 1
    if (it != st.end()) {
        st.erase(it);  // Erase it if found
    }

    // Iterate from the element 4 to the end
    set<int>::iterator itr = st.find(4);
    if (itr != st.end()) {
       
            cout << *itr << " ";  // Dereference the iterator to print the value
    }
    cout << endl;

    // Counting the occurrences of an element
    int cnt = st.count(4);
    cout << "Count of element 4: " << cnt << endl;

    return 0;
}
