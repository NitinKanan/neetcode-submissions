class Solution {
public:
    bool isAnagram(string s, string t) {
        // check if the lengths are unequal then it must not be a anagram
        if (s.length() != t.length()) return false;
        // sorting solution
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
    }
};
