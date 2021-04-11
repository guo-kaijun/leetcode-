/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
/*

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.empty()) return arr1;
        int count = 0;
        for(int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++)
            {
                if(arr2[i] == arr1[j]) {
                    if(j != count) {
                    int temp = arr1[j];
                    arr1[j] = arr1[count];
                    arr1[count] = temp; }
                    count++;
                }
            }
        } 
        if(count < arr1.size()-1) sort(arr1.begin()+count,arr1.end());
        return arr1;
    }
};
*/
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for (auto i : arr1) m[i]++;
        int pos = 0;
        for (auto j : arr2) {
            while(m[j]-- > 0) arr1[pos++] = j;
        }
        for (auto it : m) {
            while(it.second-- > 0) arr1[pos++] = it.first;
        }
        return arr1;
    }
};//better

// @lc code=end

