/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Different approach by using a new string to store the valid charachters for camprison
    bool isPalindrome_1(string s) {
        string curr = "";
        for (int i = 0; i < s.size(); i++)
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
            ||
                (s[i] >= '0' && s[i] <= '9'))
                curr += s[i]; // storing only alphanumeric characters in the string

        for (int i = 0; i < curr.size(); i++) {
            curr[i] = tolower(curr[i]); // converting string to lower case as asked in the question
        }

        int start = 0, end = curr.size() - 1;
        while (start <= end) { // doing comparison for the palindrome check
        //until the two pointers meet at the same point
            if (curr[start] != curr[end])
                return false;

            start++;
            end--;
        }
        return true;
}

//Using a two-pointer Approach
bool ispalindrome(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start < end){
        while(start<end && !isalnum(s[start])){
            start++;
        }
        while(start<end && !isalnum(s[end])){
        end--;
        }
        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

//Using Recursive function for vaildating:
bool isPalindromeHelper(int start, int end, const string &s) {
    // Base case: if the pointers have crossed, the string is a palindrome
    if (start >= end) {
        return true;
    }
    
    // Skip non-alphanumeric characters from the start
    if (!isalnum(s[start])) {
        return isPalindromeHelper(start + 1, end, s);
    }
    
    // Skip non-alphanumeric characters from the end
    if (!isalnum(s[end])) {
        return isPalindromeHelper(start, end - 1, s);
    }
    
    // Compare characters after converting to lowercase
    if (tolower(s[start]) != tolower(s[end])) {
        return false;
    }
    
    // Recursive call for the next pair of characters
    return isPalindromeHelper(start + 1, end - 1, s);
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);    // Use getline to handle spaces and special characters
    cout << "The given string is " << (isPalindromeHelper(0,s.size()-1,s) ? "a Palindrome" : "not a Palindrome") << endl;

    return 0;
}

/*

bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            // Skip non-alphanumeric characters from the start
            if (!isalnum(s[start])) {
                start++;

                //adding reason, previously not added
                continue;  // Recheck the new start
            }
            // Skip non-alphanumeric characters from the end
            if (!isalnum(s[end])) {
                end--;

                //adding reason, previously not added
                // continue;  // Recheck the new end
            }
            // Compare characters (case-insensitive)
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            // Move both pointers
            start++;
            end--;
        }
        return true;
    }

The issue with the current code is that when the if (!isalnum(s[start])) or if (!isalnum(s[end])) condition is true, the pointer (start or end) is updated, but the loop proceeds to compare the characters in the next if statement without checking if both start and end have been moved to valid alphanumeric characters.

This can result in incorrect comparisons when skipping non-alphanumeric characters. To fix this, you need to ensure that after skipping non-alphanumeric characters, you don't move to the next iteration of the loop before re-checking the new character positions.

But there is an issue:
The issue causing the "Time Limit Exceeded" (TLE) error is likely due to the repeated calls to tolower and isalnum in a loop. This can slow down the function, especially with long strings. We need to ensure that these checks are efficient and avoid unnecessary calls.
Therefore, ko code function me hai wo use kiya hu tu avoid errors.

Key Improvements:
Efficient Character Skipping: Using while (start < end && !isalnum(s[start])) ensures that the loop continues skipping non-alphanumeric characters in one go, without unnecessary comparisons.
Avoid Extra Function Calls: tolower(s[start]) and tolower(s[end]) are called only when necessary, minimizing repeated operations.
Explanation:
Two while loops are used to skip non-alphanumeric characters on both ends.
The comparison is done only after ensuring both pointers are at valid alphanumeric characters.
This ensures that the code is efficient and avoids redundant checks.
Time Complexity:
The time complexity of this approach is O(n), where n is the length of the string. This is because each character is processed at most once, either to check if it's alphanumeric or to compare it to its counterpart.
This should resolve the Time Limit Exceeded (TLE) issue.

*/