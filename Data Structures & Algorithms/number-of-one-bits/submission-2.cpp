class Solution {
public:
    int hammingWeight(uint32_t n) {
        // this solution is even more optimal than the previous solution because the loop runs only the number of times of 1's present in the binary representation of the number so the time complexity will be O(number of 1's in the binary representation of the number) not O(32) or O(number of bits used to represent the number)
        // initialise a veriable res to store the number of 1's
        int res = 0;
        // run a loop until the number becomes 0
        while (n) {
            // eleminate the right most 1 from the number
            n &= (n - 1);
            res++;
        }
        return res;
    }
};
