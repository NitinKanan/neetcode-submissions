class Solution {
public:
    bool isAnagram(string s, string t) {
        // check if the lengths are unequal then it must not be a anagram
        if (s.length() != t.length()) return false;
        // sorting solution
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        
        // return s == t;
        
        // hashing solution
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        for (char c : t) {
            count[c]--;
        }
        for (auto const& [key, val] : count) {
            if (val != 0) return false;
        }
        return true;
    }
};
