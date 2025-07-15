## Question

Help me in understanding this: `!isalnum(s[start])`
I know that `isalnum` checks if a character is alphanumeric, but here we want to *skip* when it is not—so we write `!isalnum`. Explain this in a memorable way and why we often use `!` (logical NOT) in conditions.

---

## Answer

1. **What `isalnum(c)` Does**

   * Returns **true** if `c` is a **letter** (`A–Z`, `a–z`) **or** a **digit** (`0–9`).
   * Examples:

     ```cpp
     isalnum('A')  // true  
     isalnum('7')  // true  
     isalnum('$')  // false  
     ```

2. **Adding the `!` Operator**

   * `!` means “not.”
   * So `!isalnum(c)` is **true** when `c` is **not** alphanumeric—i.e. punctuation, whitespace, symbols, etc.
   * Example:

     ```cpp
     char c = ',';  
     if (!isalnum(c)) {
       // true, because ',' is not a letter or digit
     }
     ```

3. **Why We Use It to Skip Characters**
   In a palindrome checker (or similar string processor), we only care about letters and digits. We want to **skip** everything else:

   ```cpp
   while (left < right && !isalnum(s[left])) {
     left++;  // advance past non-alphanumeric characters
   }
   ```

   * **Read aloud:** “While the current character is *not* alphanumeric, move the pointer forward.”
   * This loop skips spaces, commas, punctuation, etc., until it lands on a valid letter or digit.

4. **General Use of `!` in Conditions**
   Whenever you want the **opposite** of a boolean test, prepend `!`:

   | Test         | Meaning                   | Negated Test  | Meaning                            |
   | ------------ | ------------------------- | ------------- | ---------------------------------- |
   | `isalpha(c)` | “Is `c` a letter?”        | `!isalpha(c)` | “Is `c` not a letter?”             |
   | `empty()`    | “Is the container empty?” | `!empty()`    | “Is the container not empty?”      |
   | `isalnum(c)` | “Is `c` letter or digit?” | `!isalnum(c)` | “Is `c` neither letter nor digit?” |

5. **Mnemonic to Remember**

   1. **Ask:** “Is this a letter or digit?” → `isalnum(c)`
   2. **Flip it:** “No? Then skip it!” → `!isalnum(c)`
   3. **Code it:**

      ```cpp
      if (!isalnum(s[i])) {
        // skip or ignore s[i]
      }
      ```

Any time you want to **exclude** rather than **include** based on a test, just stick a `!` in front to invert the result!
