class Solution {
public:
    vector<int> countBits(int n) {
        // this is the brute force solution of the problem, where we are checking the number of sets (1) for each number between 0 to n one by one using a nested loop
        // this solution has the time complexity of O(nlogn) OR O(n) depending on the assumption of the size of the int, if it's 32 bit interger then O(n) if the size is increasing as per the input then for each number num then inner loop run for log n of base 2 because that is the max division we can do to a number n by 2 in order to find the number of sets in the number
        // define a result vector for storing the result of size n + 1;
        vector<int> res(n + 1);
        // run a for loop to iterate through each number between 1 to n, loop starts with 1 because the number of sets of number 0 will always be 0
        for (int num = 1; num <= n; num++) {
            // run another loop for counting number of sets in the binary representation of the number
            for (int i = 0; i < 32; i++) {
                // find out weather the bit at that positon is set or not, mask (1 << i) & number
                if (((1 << i) & num)) res[num]++;
            }
        }
        return res;
    }
};
