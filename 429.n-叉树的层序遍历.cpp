// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem429.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

// @lc code=start
/* #include<vector>
#include<queue>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
}; */

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root) return res; 
        queue<Node*> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> vec;
            int size = que.size();
            for (int i = 0; i < size; i++)
            {
                Node* node = que.front();
                que.pop();
                vec.push_back(node->val);
                for (auto child:node->children)
                {
                    que.push(child);
                }  
            }
            res.push_back(vec); 
        }
        return res;
    }
};
// @lc code=end

