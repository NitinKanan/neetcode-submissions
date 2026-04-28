class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window solution
        int res = 0;
        int l = 0;
        unordered_set<char> a;
        for (int j = 0; j < s.size(); j++) {
            while (a.find(s[j]) != a.end()) {
                a.erase(s[l]);
                l++;
            }
            a.insert(s[j]);
            res = max(res, j - l + 1);
        }
        return res;
    }
};
