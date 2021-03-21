/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n == 1) return x;
        double res;
        long long n1=n;
        if(n<0) {
            x = 1/x;
            n1 = -n1;
        }
        res = myPow(x, int(n1/2));
        return n1%2 ? res*res*x: res*res;  
    }
};
// @lc code=end

