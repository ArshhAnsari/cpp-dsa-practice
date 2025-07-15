## 1. Local Variable in Recursion

```cpp
int recursiveLocal(int n) {
    if (n > 0) {
        // Each call gets its own brand‑new 'n' and return value
        return recursiveLocal(n - 1) + n;
    }
    return 0;
}
```

### What happens when you call `recursiveLocal(5)`?

1. **Call stack** builds up:

   ```
   recursiveLocal(5)
   └─ recursiveLocal(4)
      └─ recursiveLocal(3)
         └─ recursiveLocal(2)
            └─ recursiveLocal(1)
               └─ recursiveLocal(0) → returns 0
   ```
2. **Unwinding** (going back up), each frame adds its own `n`:

   ```
   recursiveLocal(1) returns 0 + 1 = 1
   recursiveLocal(2) returns 1 + 2 = 3
   recursiveLocal(3) returns 3 + 3 = 6
   recursiveLocal(4) returns 6 + 4 = 10
   recursiveLocal(5) returns 10 + 5 = 15
   ```
3. **Key point:**

   * **Each** call has its own **fresh** local copy of `n` (and its own return slot).
   * No value “sticks” around between calls.

**Result:** `recursiveLocal(5)` → **15**

---

## 2. Static Variable in Recursion

```cpp
int recursiveStatic(int n) {
    static int staticVar = 0;  // created once, then lives through all calls
    if (n > 0) {
        staticVar++;               
        return recursiveStatic(n - 1) + staticVar;
    }
    return 0;
}
```

### What happens when you call `recursiveStatic(5)`?

1. **First call (n=5):**

   * `staticVar` is initialized to 0 (only once ever), then `staticVar++` → becomes 1.
   * Calls `recursiveStatic(4)`.

2. **Next calls** increment the **same** `staticVar`:

   ```
   n=4 → staticVar = 2 → recurse
   n=3 → staticVar = 3 → recurse
   n=2 → staticVar = 4 → recurse
   n=1 → staticVar = 5 → recurse
   n=0 → base case, returns 0
   ```

3. **Unwinding** then always adds the **current** staticVar (which is 5 in all returns):

   ```
   at n=1: return 0 + 5 = 5
   at n=2: return 5 + 5 = 10
   at n=3: return 10 + 5 = 15
   at n=4: return 15 + 5 = 20
   at n=5: return 20 + 5 = 25
   ```

4. **Key points:**

   * There is **one single** `staticVar` shared by **all** calls.
   * It keeps its value between calls (and is **never re‑initialized**).

**Result:** `recursiveStatic(5)` → **25**

---

## 3. Global Variable in Recursion

```cpp
int globalVar = 0;  // lives from program start to end

int recursiveGlobal(int n) {
    if (n > 0) {
        globalVar++;             
        return recursiveGlobal(n - 1) + globalVar;
    }
    return 0;
}
```

### What happens when you call `recursiveGlobal(5)`?

It behaves **almost exactly like** the static example:

1. **globalVar** starts at 0.
2. Each level does `globalVar++`, so by the time you hit `n=0`, `globalVar` is 5.
3. As you unwind, each return adds that same `5` → you get **25** again.
4. After the call finishes, `globalVar` remains at **5** (because globals persist).

**Result:** `recursiveGlobal(5)` → **25**, and afterwards `globalVar == 5`.

---

## 4. Quick Comparison

| Variable Type | Lifetime                         | Initialized When       | Persists Between Calls?     | Your Example Result (n=5) |
| ------------- | -------------------------------- | ---------------------- | --------------------------- | ------------------------- |
| **Local**     | Each function call’s stack frame | Every call (`n` each)  | No                          | 15                        |
| **Static**    | Program’s data segment           | **Once** on first call | **Yes** (all calls)         | 25                        |
| **Global**    | Program’s data segment           | Before `main()` starts | **Yes** (all calls + after) | 25                        |

---

## 5. Why Use Which?

* **Local:** when you want each recursive call to work with its own fresh data (e.g., summing without side‑effects).
* **Static:** when you want to **remember** something across calls but don’t need or want it exposed everywhere.
* **Global:** when you want a single shared variable accessible (and modifiable) by any function—but use sparingly, since globals can make your code harder to follow.

---

**Quick‑Recall Guide: Local vs Static vs Global in Recursion**

---

### 1. Local Variables

* **What & Where:** Declared inside the function; live on the stack frame of each call.
* **Init & Lifetime:** Re‑initialized every time the function is called; destroyed when that call returns.
* **Recursion Behavior:** Each recursive call gets its own fresh copy—**no memory of previous calls**.
* **Use When:** You want completely independent data per call (e.g., summing `n`).

---

### 2. Static Variables

* **What & Where:** Declared inside the function with the `static` keyword; stored in the program’s data segment.
* **Init & Lifetime:** Initialized only **once** (first time control reaches it), then lives until program end.
* **Recursion Behavior:** **One single** variable shared across all calls—**retains** its value between calls.
* **Use When:** You need to **accumulate** or **remember** something across recursive calls without exposing it globally.

---

### 3. Global Variables

* **What & Where:** Declared outside any function; also in the program’s data segment.
* **Init & Lifetime:** Initialized before `main()` starts; lives until program end.
* **Recursion Behavior:** Shared across all functions and calls—behaves just like a static inside a function.
* **Use When:** You need broad access to shared state—**but** can make code harder to follow, so use sparingly.

---

### Handy Comparison

| Property                | Local                 | Static                    | Global                                |
| ----------------------- | --------------------- | ------------------------- | ------------------------------------- |
| Storage                 | Stack (per call)      | Data segment (once)       | Data segment (once)                   |
| Initialization          | Every call            | First call only           | Before `main()`                       |
| Persists between calls? | No                    | Yes                       | Yes                                   |
| Recursion use           | Fresh state each call | Shared state across calls | Shared state across calls & functions |

Keep this table in mind for a **one‑glance** refresher on how each variable “remembers” (or doesn’t) across recursive calls.


