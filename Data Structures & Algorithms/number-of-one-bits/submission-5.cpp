class Solution {
public:
    int hammingWeight(uint32_t n) {
        // using built-in c++ function __builtin_popcount which returns the number of sets in a binary representation of a number
        return __builtin_popcount(n);
        // we can use __builtin_popcountll if the number is large
        // this solution is:
        // minimal
        // error prone specially for beginners
        // function is optimised internally (uses CPU instructions)
    }
};
