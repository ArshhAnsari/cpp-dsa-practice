# Using typedef with Pointers

When working with pointers, typedef simplifies complex declarations.

Without typedef:

```
int *ptr1, *ptr2;  // Only ptr1 is a pointer, ptr2 is an int!
```
To avoid this confusion, use typedef:
```
typedef int* IntPointer;
IntPointer ptr1, ptr2;  // Now both are pointers!
```
Here, IntPointer is equivalent to int*, so both ptr1 and ptr2 are pointers.

---
# Using typedef with Structures

When working with struct, typedef makes the code shorter.

Without typedef:
```
struct Student {
    int age;
    float marks;
};

int main() {
    struct Student s1;
    s1.age = 20;
    s1.marks = 85.5;
    return 0;
}
```
With typedef:
```
typedef struct {
    int age;
    float marks;
} Student;

int main() {
    Student s1;  // No need to write `struct Student`
    s1.age = 20;
    s1.marks = 85.5;
    return 0;
}
```
✅ Now Student directly acts as a type name.

---
## Modern Alternative: using (C++11)

Instead of typedef, C++11 introduced using, which is more powerful and easier to read.

**Using typedef:**
```
typedef unsigned int uint;
```
**Using `using` (Better in C++11+):**

```
using uint = unsigned int;
```
using is preferred because it also works well with templates.

# `Summary`

- typedef creates an alias for a data type, making code more readable.

- Useful for long or complex types, pointers, and structures.

- C++11's using is a modern replacement for typedef.