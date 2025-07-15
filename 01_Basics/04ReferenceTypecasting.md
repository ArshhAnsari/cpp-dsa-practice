there is a difference between writing `double x = (int)3.14;` and `double x = int(3.14);`. Let’s break it down.  

---

### **1️⃣ `double x = (int)3.14;` (C-Style Casting)**
```cpp
double x = (int)3.14;
```
- **Explanation:**  
  - `(int)3.14` is a **C-style cast**, which explicitly converts `3.14` to an integer.
  - It **removes the decimal part**, so `3.14` becomes `3`.  
  - Then, `x` (which is of type `double`) gets assigned `3.0` (since assigning an `int` to a `double` implicitly converts it back).

- **Final Value:**  
  `x = 3.0`

---

### **2️⃣ `double x = int(3.14);` (Functional Casting)**
```cpp
double x = int(3.14);
```
- **Explanation:**  
  - `int(3.14)` is a **functional cast**, which is another way of explicitly converting `3.14` to an integer.
  - It behaves **exactly like C-style casting**, meaning `3.14` gets truncated to `3`.
  - Then, `x` is assigned `3.0`.

- **Final Value:**  
  `x = 3.0`

---

### **Comparison**
| Syntax | Type | Effect | Final Value |
|---------|--------|--------|-------------|
| `double x = (int)3.14;` | C-style cast | Converts `3.14` to `3`, then assigns `3.0` to `x` | `3.0` |
| `double x = int(3.14);` | Functional cast | Converts `3.14` to `3`, then assigns `3.0` to `x` | `3.0` |

✅ **Both work the same way in this case** and result in `x = 3.0`.  

However, **C++-style casts (`static_cast<int>(3.14)`) are recommended** because they are safer and easier to read.

---

### **Extra: Difference in `sum += 1` and `sum = sum + 1`**
There is a subtle difference in **performance**:
- `sum += 1;` **may be optimized** by the compiler as an "increment operation".
- `sum = sum + 1;` explicitly performs an addition and assignment separately.

✅ **For primitive types (like `int`, `double`), both are effectively the same.**  
✅ **For complex types (like iterators, objects), `+=` might be more efficient.**  