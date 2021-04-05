/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
/*
class Solution {
public:
    int climbStairs(int n) {
        int f1 = 1, f2 = 2;
        int fn;
        if(n == 1) return f1;
        if(n == 2) return f2;
        for(int i = 3; i <= n; i++) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn;
    }
};
*/
class Solution {
public:
    int climbStairs(int n) {
        double sqrt5 = sqrt(5);
        double fibn = pow((1 + sqrt5) / 2, n + 1) - pow((1 - sqrt5) / 2, n + 1);
        return (int)round(fibn / sqrt5);
    }
};

//通項公式数学推导
// @lc code=end

