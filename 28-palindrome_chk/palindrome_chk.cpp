#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * PROGRAM NAME: Palindrome Checker (palindrome_chk)
 *
 * OBJECTIVE:
 * Check whether a user-provided string reads the same forward and backward (Palindrome).
 * Demonstrates C++ std::string methods, case-insensitive character handling with tolower() from <cctype>,
 * two-pointer convergence pattern, and string reversal.
 *
 * ALGORITHM:
 * 1. Declare function prototypes:
 *    - isPalindrome(const string &str): Converges two pointers (left & right) from both ends,
 *      comparing lowercase characters. Returns false upon first mismatch, true if all match.
 *    - getReversed(const string &str): Iterates backwards from end to start to build the reversed string.
 * 2. In main():
 *    - Read string input from user via getline(cin, text) to capture whitespace.
 *    - Display original and reversed text.
 *    - Evaluate isPalindrome(text) and print the determination result.
 *
 * TIME COMPLEXITY:
 * - isPalindrome: O(n) - At most n/2 character comparisons.
 * - getReversed: O(n) - Single linear pass.
 * SPACE COMPLEXITY: O(n) for the reversed string copy; O(1) auxiliary for two-pointer inspection.
 */

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================
bool isPalindrome(const string &str);
string getReversed(const string &str);

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    string text;

    cout << "\n=== PALINDROME CHECKER ===\n";
    cout << "Enter a word or text: ";
    getline(cin, text);

    // Display original and reversed strings
    cout << "\nOriginal Text : " << text << endl;
    cout << "Reversed Text : " << getReversed(text) << endl;

    // Evaluate palindrome status
    if (isPalindrome(text)) {
        cout << "\n[RESULT] \"" << text << "\" is a PALINDROME!\n";
    } else {
        cout << "\n[RESULT] \"" << text << "\" is NOT a palindrome.\n";
    }

    return 0;
}

// ==========================================
// FUNCTION DEFINITIONS
// ==========================================

// Evaluates whether a string is a palindrome using a two-pointer approach
bool isPalindrome(const string &str) {
    int leftFinger = 0;
    int rightFinger = str.length() - 1;

    while (leftFinger < rightFinger) {
        if (tolower(str[leftFinger]) != tolower(str[rightFinger])) {
            return false;
        }
        leftFinger++;
        rightFinger--;
    }
    return true;
}

// Generates and returns a reversed copy of the input string
string getReversed(const string &str) {
    string reversedStr = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}