/* https://leetcode.com/problems/reverse-linked-list/ */

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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *t=head;
        vector<int> ans;
        while(t) {
            ans.push_back(t->val);
            t=t->next;
        }
        reverse(ans.begin(),ans.end());
        t=head;
        int i=0;
        while(t) {
            t->val=ans[i++];
            t=t->next;
        }
        return head;
    }
};