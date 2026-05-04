class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // use a string for storing each bits of number n from right to left
        // so bit position 0 gonna map to string position 0, 1 -> string position 1 and so on
        string binary = "";
        for (int i = 0; i < 32; i++) {
            // extract 0th position bit by n & (1 << i)
            if (n & (1 << i)) binary += '1';
            else binary += '0';
        }

        // initialise res variable for the result and for maping string position 32 to bit position 0
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            if (binary[31 - i] == '1') res |= (1 << i);
        }
        return res;
    }
};
