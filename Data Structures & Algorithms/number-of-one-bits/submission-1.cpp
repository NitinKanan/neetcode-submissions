class Solution {
public:
    int hammingWeight(uint32_t n) {
        // this approach for solving this problem uses the LSB
        // check if the LSB is set or not, increment res if it is, otherwise do nothing
        // in each iteration right shift the number by 1
        // check until the number is not zero
        // using this approach we don't need to iterate 32 times, we only iterate the number of times the number of bits used to represent the number

        // initialise the variable res
        int res = 0;
        // run loop for checking each bits the number used to represent
        while (n != 0) {
            // condition to check if LSB is set or not
            res += (n & 1) ? 1 : 0;
            // right shift the number by 1 OR divide the number by 2
            n >>= 1;
        }
        return res;
    }
};
