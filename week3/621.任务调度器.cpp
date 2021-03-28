/*
 * @lc app=leetcode.cn id=621 lang=cpp
 *
 * [621] 任务调度器
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n){
        int len=tasks.size();
        vector<int> vec(26);
        for(char c:tasks) ++vec[c-'A'];
        sort(vec.begin(),vec.end(),[](int& x,int&y){return x>y;});
        int cnt=1;
        while(cnt<vec.size()&&vec[cnt]==vec[0]) cnt++;
        return max(len,cnt+(n+1)*(vec[0]-1) );
    }
};
//任務調度器關鍵是把n足夠大以及n很小的兩種情況統一化。兩種情況仔細羅列開沒有區別。
// @lc code=end

