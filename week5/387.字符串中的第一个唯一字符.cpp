/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
/*
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        int first;
        queue<int> pos;
        for(int i = 0; i < s.size(); i++) {
            map[s[i]]++;
            if(map[s[i]] == 1) pos.push(i);
        }
        while (!pos.empty())
        {
            first = pos.front();
            pos.pop();
            if(map[s[first]]==1) return first;
        }
        return -1;
    }
}; */

class Solution {
public:
    int firstUniqChar(string s) {
        std::pair<int, int> counts[26];
        
        int n = s.size();
        for (int i = 0; i < n; i++) {
            int pos = s[i] - 'a';
            counts[pos].first++;
            counts[pos].second = i;
        }
        
        int index = n;
        
        for (int i = 0; i < 26; i++) {
            if (counts[i].first == 1) {
                index = std::min(index, counts[i].second);
            }    
        }
        
        return (index == n) ? -1 : index;
    }
};
// @lc code=end

