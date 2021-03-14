// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem21.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head;
        if(l1->val < l2-> val) {
            head = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            l2 = l2->next;
        }
        head->next = mergeTwoLists(l1,l2);
        return head;
    }
};
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head = new ListNode(0);
        ListNode* temp;
        temp = head;
        while(l1&&l2) {
            if(l1->val < l2->val) {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            } 
            else {
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        temp->next = l1? l1:l2;
        return head->next;
    }
};
// @lc code=end

