class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // this solution is based on bit manipulation and the solution doesn't use extra space of sting
        // initialise a res variable of type uint32_t for storing the result
        uint32_t res = 0;
        // loop to iterate through each bit of the number
        for (int i = 0; i < 32; i++) {
            // extract each bit from right and store it in a seperate variable
            uint32_t bit = (n >> i) & 1;
            // place the extracted bit at the desired reversed position by doing the right shift
            res += (bit << (31 - i)); // both | and + will produce the same result
        }
        return res;
    }
};
