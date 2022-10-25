/* https://leetcode.com/problems/remove-nth-node-from-end-of-list/ */

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t=head;
        int i=0,c=0,s=0;
        while(t){
            c++;
            t=t->next;
        }
        if(c==n) return head->next;
        t=head;
        while(t){
            if((s+1)==(c-n)){
                t->next=t->next->next;
                break;
            }
            s++;
            t=t->next;
        }
        return head;
    }
};