class Solution {
public:
    bool isPalindrome(string s) {
        // two pointer solution
        // the actual fn
        int l = 0, r = s.size() - 1;
        while (l < r) {
            // skip if the l is at non alnum
            while (l < r && !alnum(s[l])) {
                l++;
            }
            // skip if the r is at non alnum
            while (l < r && !alnum(s[r])) {
                r--;
            }
            // check if the lower case matches
            if (tolower(s[l]) == tolower(s[r])) {
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
    // write a fn for checking the char is alnum or not
    bool alnum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
