// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem438.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> findAnagrams(string s, string p) {
    if (s.size() < p.size()) return {};
    unordered_map<char, int> occ;
    for (char c : p) occ[c]--;
    for (int i = 0; i < p.size(); i++)
      if (++occ[s[i]] == 0) occ.erase(s[i]);
    vector<int> ans;
    if (occ.empty()) ans.push_back(0);
    for (int i = p.size(), j = 0; i < s.size(); i++, j++) {
      if (++occ[s[i]] == 0) occ.erase(s[i]);
      if (--occ[s[j]] == 0) occ.erase(s[j]);
      if (occ.empty()) ans.push_back(j + 1);
    }
    return ans;
  }
};
// @lc code=end
