/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string maxstr;
        int size = s.size();
        int maxsize;
        vector<vector <bool>> p(size,vector<bool>(size));
        for (int l = 0; l <size ; l++)
        {
            for (int i = 0; i+l < size; i++)
            {
                int j=i+l;
                if (l == 0)
                {
                    p[i][j]=1;
                }
                else if (l==1)
                {
                    p[i][j]=(s[i]==s[j]);
                }
                else {
                    p[i][j] = (s[i] == s[j] && p[i + 1][j - 1]);
                }
                if (p[i][j] && l + 1 > maxstr.length()) {
                    maxstr = s.substr(i, l + 1);
                }    
                
            }
            
        }
        return maxstr;
    }
};
// @lc code=end

