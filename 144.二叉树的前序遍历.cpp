/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
#include<vector>
#include<queue>
#include<stack>
using namespace std;

/*
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pre_search(root, res);
        return res;
    }
private:
    void pre_search(TreeNode* root, vector<int>& res) {
        if(root == nullptr) return;
        res.push_back(root->val);
        pre_search(root->left,res);
        pre_search(root->right,res);
    }
};
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) { 
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> sta;
        sta.push(root);
        while (!sta.empty()) {
            TreeNode* node = sta.top();
            sta.pop();
            res.push_back(node->val);
            if(node->right) sta.push(node->right);
            if(node->left) sta.push(node->left);
        }
        return res;
    }
};

// @lc code=end

