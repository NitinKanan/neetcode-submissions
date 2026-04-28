class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // brute force -> take each char and try to build charSet sequence without duplicate
        // define charSet res for storing the longest substring
        int res = 0; // why zero because the string can be empty
        for (int i = 0; i < s.size(); i++) {
            // use unordered_set to check if the char is already present or not
            unordered_set<char> charSet;
            for (int j = i; j < s.size(); j++) {
                // check if s[j] already in unordered_set or not
                if (charSet.find(s[j]) != charSet.end()) {
                    break;
                }
                charSet.insert(s[j]);
            }
            res = max(res, (int)charSet.size());
        }
        return res;
    }
};
