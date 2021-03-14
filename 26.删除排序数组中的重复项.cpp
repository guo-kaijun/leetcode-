// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem26.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=1,size = nums.size();
        if(size == 0) return 0;
        for (int fast = 1; fast < size; fast++) {
            if (nums[fast] != nums[fast-1]) {
                if(fast != slow)nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};
// @lc code=end

