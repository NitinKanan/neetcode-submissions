class Solution {
public:
    int hammingWeight(uint32_t n) {
        // initialise a variable res to store the result
        int res = 0;
        // run loop to check all 32 positions in a 32 bit binary representation of a number n
        // uint32_t is a data type which stores unsigned interger of size 32 bit
        for (int i = 0; i < 32; i++) {
            // (1 << i) -> left shift the number by i position for creating a mask for each position
            // anding the mask with number gives 1 if bit at that position is set(1) or not(0), if it's set increment the result
            if ((1 << i) & n) res++;
        }
        return res;
    }
};
