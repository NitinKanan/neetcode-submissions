class Solution {
public:
    int getSum(int a, int b) {
        // this solution represents how we actually do bitwise addition in a program
        int carry = 0, res = 0, mask = 0xFFFFFFFF;
        // run a for loop for a bit by bit additon
        for (int i = 0; i < 32; i++) {
            int a_bit = (a >> i) & 1;
            int b_bit = (b >> i) & 1;
            int cur_bit = a_bit ^ b_bit ^ carry;
            carry = (a_bit + b_bit + carry) >= 2 ? 1 : 0;
            if (cur_bit) {
                res |= (1 << i);
            }
        }
        // retreat a large positive number to a negative number
        if (res > 0x7FFFFFFF) {
            res = ~(res ^ mask);
        }
        return res;
    }
};
