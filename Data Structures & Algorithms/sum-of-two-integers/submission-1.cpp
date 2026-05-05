class Solution {
public:
    int getSum(int a, int b) {
        // most optimal solution since xor computes the sum without carry and AND computes the carry, we'll use these to compute the sum
        while (b != 0) {
            int carry = (a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
    }
};
