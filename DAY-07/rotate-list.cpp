/* https://leetcode.com/problems/rotate-list/ */

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode *t=head;
        vector<int> ans;
        int i=0,j,c=0;
        while(t) {
            ans.push_back(t->val);
                c++;
            t=t->next;
        }
        k%=c;
        reverse(ans.begin(),ans.end());
        reverse(ans.begin(),ans.begin()+k);
        reverse(ans.begin()+k,ans.end());
        t=head;
        while(t) {
            t->val=ans[i++];
            t=t->next;
        }
        return head;
    }
};