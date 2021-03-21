/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int index = 0;
        vector<int> list_;
        if(nums.empty()) return res;
        recursion(nums,res,list_,index);
        return res;
    }
    void recursion(vector<int>& nums, vector<vector<int>> &res,
                   vector<int> &list_, int index){
        if(index == nums.size()) {
            res.push_back(list_);
            return;
        }
        index++;
        recursion(nums,res,list_,index);
        list_.push_back(nums[index-1]);
        recursion(nums,res,list_,index);
        list_.pop_back();
        return;
    }
};
// @lc code=end

