/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n) {
            n = n & (n - 1);
            sum++;
        }
        return sum;
    }
};
// @lc code=end

