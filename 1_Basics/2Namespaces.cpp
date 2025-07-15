#include <iostream>
namespace first{
    int x = 2;
}
namespace second{
    int x = 3;
}

int main() {
    using namespace std;
    int x = 1;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;
    return 0;
}
/*
Namespaces are a way to organize code and avoid naming conflicts by grouping related variables, functions, or classes under a unique name.
Think of a namespace as a container or a folder that holds identifiers. 
If two parts of your program or two libraries have the same identifier name, namespaces prevent them from clashing.

Accessing Namespaced Variables:

The scope resolution operator :: is used to access variables in a namespace.
first::x refers to the x inside the first namespace (which is 2).
second::x refers to the x inside the second namespace (which is 3).

Why Use Namespaces?
Avoiding Name Collisions: If you have multiple libraries or parts of a large program, two pieces of code might use the same variable or function names. Namespaces prevent these collisions by "hiding" the names inside a named scope.
Organizing Code: They help structure your code logically. For example, the C++ Standard Library uses the std namespace to group all its functions and classes.

Should You Always Use using namespace std;?

While it makes writing code easier, it is not always recommended, especially in large programs or header files, because:
Name conflicts may occur – If different libraries have the same function/variable name as in std, it may cause ambiguity.
Namespace pollution – It brings all std names into the global scope, which may lead to unexpected behavior.
✅ Best Practice: Instead of using namespace std;, use specific std:: prefixes or selective using declarations:

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Hello, World!" << endl;
    string name = "Arsh";
    return 0;
}
This way, you avoid polluting the global scope while keeping convenience.

*/