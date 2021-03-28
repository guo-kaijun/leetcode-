/*
 * @lc app=leetcode.cn id=221 lang=cpp
 *
 * [221] 最大正方形
 */

// @lc code=start
/*
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        queue<vector<int>> que;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == '1') que.push(vector<int>{i,j});
            }
        }
        if(que.empty()) return 0;
        int size = 1;
        int maxsize = 1;
        while(!que.empty()) {
            int que_size = que.size();
            for(int i = 0; i < que_size; i++) {
                vector<int> pos = que.front();
                que.pop();
                if(is_square(pos,size+1,matrix)) {
                    maxsize = size +1;
                    que.push(pos);
                }
            }
            size = maxsize;
        }
        return maxsize*maxsize;
    }
    bool is_square(vector<int> &pos, int size, vector<vector<char>>& matrix) {
        if((pos[0]+size) >matrix.size() || (pos[1]+size) > matrix[0].size()) return false;
        for(int i = 0; i < size; i++) {
            if(matrix[pos[0]+size-1][pos[1]+i]!='1' || matrix[pos[0]+i][pos[1]+size-1]!='1') return false;
        }
        return true;
    }
};//暴力解法
*/
#include<vector>
using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return 0;
        }
        int maxSide = 0;
        int rows = matrix.size(), columns = matrix[0].size();
        vector<vector<int>> dp(rows, vector<int>(columns));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] == '1') {
                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                    }
                    maxSide = max(maxSide, dp[i][j]);
                }
            }
        }
        int maxSquare = maxSide * maxSide;
        return maxSquare;
    }
};
//最優不重複子問題
// @lc code=end

