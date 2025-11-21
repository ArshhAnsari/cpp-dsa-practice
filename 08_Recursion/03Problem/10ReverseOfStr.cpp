#include <iostream>
#include <string>
#include <utility> // Required for std::swap
using namespace std;

/* =================================================================================
   STRATEGY 1: HEAD RECURSION (The "Build on Return" Method)
   Type: Non-Mutating (Returns a new string)
   Complexity: O(n^2) Time | O(n) Stack
   
   HOW IT WORKS:
   1. We pass the string by const reference (read-only alias) to save memory.
   2. We dive deep into the recursion until we hit the end.
   3. As we return (unwind), we append the current character to the result coming back.
   
   WHY IT IS INEFFICIENT:
   String concatenation (+) creates a NEW copy of the string at every single step.
   "abc" + 'd' -> copies "abc".
   For long strings, this is very slow. Use this only for understanding recursion.
   ================================================================================= */
string reverseBuildNew(const string& str, int index) {
    // 1. Base Case: We reached the end of the string.
    // Return an empty string to start the building process.
    if (index == str.length()) {
        return "";
    }

    // 2. Recursive Step (Head Recursion):
    // Go all the way to the end FIRST.
    string smallResult = reverseBuildNew(str, index + 1);

    // 3. Work Step (On the way back up):
    // Append the character at the current 'index' to the result we got from the deeper call.
    return smallResult + str[index];
}

// Helper wrapper so the user doesn't have to provide the index '0'
string getReversedString(const string& str) {
    return reverseBuildNew(str, 0);
}


/* =================================================================================
   STRATEGY 2: TWO-POINTER RECURSION (The "Swap In-Place" Method)
   Type: Mutating (Changes the original string)
   Complexity: O(n) Time | O(n) Stack
   
   HOW IT WORKS:
   1. We pass the string by REFERENCE (string&). This is the "Magic Library Card".
      It allows us to modify the original variable in 'main'.
   2. We look at the 'left' and 'right' characters.
   3. We swap them.
   4. We recurse on the inner substring (left+1, right-1).
   ================================================================================= */
void reverseInPlaceHelper(string& s, int left, int right) {
    // 1. Base Case: The pointers have met in the middle or crossed.
    // The job is done.
    if (left >= right) {
        return;
    }

    // 2. Work Step: Swap the outer characters.
    // Because 's' is a reference, this changes the memory in main() directly.
    swap(s[left], s[right]);

    // 3. Recursive Step: Shrink the problem.
    // Move left forward, move right backward.
    reverseInPlaceHelper(s, left + 1, right - 1);
}

// Wrapper function
void reverseInPlace(string& s) {
    if (s.empty()) return;
    reverseInPlaceHelper(s, 0, s.length() - 1);
}


/* =================================================================================
   STRATEGY 3: POINTER ARITHMETIC (The "Manual Address" Method)
   Type: Mutating (Changes the original string)
   Complexity: O(n) Time | O(n) Stack
   
   HOW IT WORKS:
   1. We pass a POINTER (string*). This is the "Slip of Paper with an Address".
   2. To use the string, we must manually dereference it using (*s_ptr).
   3. (*s_ptr) tells the compiler: "Go to the address on the paper and get the object."
   ================================================================================= */
void reverseByPointerHelper(string* s_ptr, int left, int right) {
    // 1. Base Case
    if (left >= right) {
        return;
    }

    // 2. Work Step (The Tricky Syntax):
    // (*s_ptr) -> Go to the address, get the string.
    // [left]   -> Access the character at 'left' index of that string.
    // If we wrote *s_ptr[left], it would try to get the left-th POINTER (wrong!).
    swap( (*s_ptr)[left], (*s_ptr)[right] );

    // 3. Recursive Step
    reverseByPointerHelper(s_ptr, left + 1, right - 1);
}

// Wrapper function
void reverseByPointer(string* s_ptr) {
    if (s_ptr == nullptr || (*s_ptr).empty()) return;
    reverseByPointerHelper(s_ptr, 0, (*s_ptr).length() - 1);
}


/* =================================================================================
   STRATEGY 4: ITERATIVE (The "Production Ready" Method)
   Type: Mutating
   Complexity: O(n) Time | O(1) Space (No Stack!)
   
   HOW IT WORKS:
   Uses a 'while' loop instead of recursion. This prevents "Stack Overflow" 
   crashes if the string is 1 million characters long.
   ================================================================================= */
void reverseIterative(string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}


int main() {
    // TEST 1: Educational Copy (Return new string)
    cout << "--- 1. Head Recursion (Copy) ---\n";
    string original = "Hello";
    string reversedCopy = getReversedString(original);
    cout << "Original: " << original << " (Unchanged)\n";
    cout << "Returned: " << reversedCopy << "\n\n";


    // TEST 2: Reference (In-Place)
    cout << "--- 2. Reference (In-Place) ---\n";
    string strRef = "World";
    cout << "Before: " << strRef << "\n";
    reverseInPlace(strRef); // Passes the "Library Card" automatically
    cout << "After:  " << strRef << "\n\n";


    // TEST 3: Pointer (In-Place)
    cout << "--- 3. Pointer (In-Place) ---\n";
    string strPtr = "Pointer";
    cout << "Before: " << strPtr << "\n";
    reverseByPointer(&strPtr); // MUST pass the address (&) manually
    cout << "After:  " << strPtr << "\n\n";


    // TEST 4: Iterative (Loop)
    cout << "--- 4. Iterative (Loop) ---\n";
    string strLoop = "Looping";
    cout << "Before: " << strLoop << "\n";
    reverseIterative(strLoop);
    cout << "After:  " << strLoop << "\n";

    return 0;
}