/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k==0||nums.size()==1) return;
        vector<int> prev(nums.end()-k,nums.end());
        for(int i = nums.size()-1 ;i >= k; --i) {
            nums[i] = nums[i-k];
        } 
        for(int i = 0;i < k;++i) {
            nums[i] = prev[i];
        }
    }
};
// @lc code=end

