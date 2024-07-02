class Solution {
public:
    bool isPalindrome(string s) {
    string modifiedString;

    // Construct a modified string by ignoring special characters
    for (char c : s) {
        if (isalnum(c)) {
            modifiedString += tolower(c);
        }
    }

    int st = 0;
    int e = modifiedString.length() - 1;

    while (st <= e) {
        if (modifiedString[st] != modifiedString[e]) {
            return false;
        }
        else {
            st++;
            e--;
        }
    }
    return true;
    }
};