/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val, cnt = 0;
        
        for (auto x : nums)
        {
            if (!cnt) val = x, cnt ++ ;   
            else
            {
                if (x == val) cnt ++ ;
                else cnt -- ;
            }
        }
        
        return val;                      
    }
};
// @lc code=end

