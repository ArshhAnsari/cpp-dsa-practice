#include <iostream>
#include <string>
using namespace std;

//First look at the RAW one:
/*  RAW 
    string s;
    cin >> s;

    //precompute
    int hash[256] = {0};
    // int hash[26]={0}; // if it specfically say only for small char;
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]]++; // hash[s[i]-'a']++;
        }

        int q;
        cout << "Enter the number of queries";
        cin >> q;
        while(q--){
            char c;
            cin >> c;
            cout << hash[c] << endl; // hash[c-'a'];
        }
    */

int main() {
    // Read input string from user
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    // Precompute character frequencies
    int charFrequencies[256] = {0}; // or int charFrequencies[26] = {0}; for small chars only
    // Used a range-based for loop to iterate over the input string
    for (char c : inputString) {
        charFrequencies[c]++;
    }

    // Read number of queries from user
    int numQueries;
    cout << "Enter the number of queries: ";
    cin >> numQueries;

    // Process queries
    while (numQueries--) {
        char queryChar;
        cout << "Enter a character to query: ";
        cin >> queryChar;

        // Display frequency of query character
        cout << "Frequency of '" << queryChar << "': " << charFrequencies[queryChar] << std::endl;
    }

    return 0;
}
