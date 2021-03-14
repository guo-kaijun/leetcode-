/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1,num=0;
        int size = digits.size();
        for(int i = 0;i < size;i++) {
            int rear = size-1-i;
            num = digits[rear]+carry;
            digits[rear] = num%10;
            carry = num/10;
            if(carry == 0) break;
        }
        if(carry!=0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
// @lc code=end

