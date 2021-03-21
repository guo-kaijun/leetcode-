// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem17.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return str;
        int index = 0;
        unordered_map<int, string> map;
        map[2] = "abc";
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";
        search(digits, index, map);
        return str;
    }
    void search(string& digits, int index, unordered_map<int,string> map) {
        if(index == digits.size()) {
            str.push_back(tmp);
            return;
        }
        int num = digits[index]-'0';
        for(char ch:map[num]) {
            tmp.push_back(ch);
            search(digits, index+1,  map);
            tmp.pop_back();
        }
        return;
    }
private:
vector<string> str;
        string tmp;
};
// @lc code=end

