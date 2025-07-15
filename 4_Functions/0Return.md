The **return type of a function** must match the **data type of the value it returns**.  

---

### **Understanding Return Types**
1. **If a function returns an `int`, it must return an `int`.**
2. **If a function returns a `string`, it must return a `string`.**
3. **If a function returns `void`, it should not return any value.**

---

### **Example 1: Correct String Return**
```cpp
#include <iostream>
using namespace std;

string greet() { // Function must return a string
    return "Hello, World!";
}

int main() {
    string message = greet();  // Storing the returned string
    cout << message << endl;   // Output: Hello, World!
    return 0;
}
```
✅ Here, `greet()` has a return type `string`, and it correctly returns a `string` value.

---

### **Example 2: Incorrect Return Type**
```cpp
#include <iostream>
using namespace std;

string greet() { 
    return 5;  // ❌ Error: returning an int instead of string
}

int main() {
    string message = greet();
    cout << message << endl;
    return 0;
}
```
🔴 **This will give a compilation error** because `5` is an `int`, but the function is supposed to return a `string`.

---

### **Example 3: Mismatched Return Type but Allowed**
If the return type is `double`, but you return an `int`, **implicit conversion** happens:
```cpp
double getValue() {
    return 5; // ✅ Allowed, 5 is automatically converted to 5.0
}
```
✅ This works because `int` can be **implicitly converted** to `double`.

---

### **Example 4: Void Function Should Not Return a Value**
```cpp
void showMessage() {
    cout << "Hello, User!" << endl;
    return;  // ✅ Allowed but no value is returned
}

int main() {
    showMessage(); // Output: Hello, User!
    return 0;
}
```
🚫 **If you try to return a value in a `void` function, it will cause an error.**  
```cpp
void showMessage() {
    return "Hello"; // ❌ Error: Can't return a string in a void function
}
```

---

### **Conclusion**
✔ **Yes, the return type must match the returned value.**  
✔ If there is a mismatch, it may cause a **compilation error** or **implicit conversion**.  
✔ `void` functions **cannot return any value**.  
🚀 Always ensure your **return type and returned value match**!
