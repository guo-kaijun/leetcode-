/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 省份数量
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
 public:
  int findCircleNum(vector<vector<int>>& isConnected) {
    int citynum = isConnected.size();
    count = citynum;
    for(int i = 0; i < citynum; ++i) parent.push_back(i);
    //初始化
    for (int i = 0; i < citynum; ++i) {
      for (int j = 0; j < citynum; ++j) {
        if (isConnected[i][j] == 1) unite(i, j);
      }
    }
    return count;
  }
  int find(int i) {
    if (parent[i] != i) {
      parent[i] = find(parent[i]);
    }
    return parent[i];
  }
  void unite(int x, int y) {
    int rootx = find(x);
    int rooty = find(y);
    if (rootx != rooty) {
      parent[rooty] = rootx;
      --count;
    }
  }
  int getCount() const { return count; }

 private:
  vector<int> parent;
  int count;
};
// @lc code=end
