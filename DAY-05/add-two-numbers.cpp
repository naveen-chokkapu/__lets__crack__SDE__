/* https://leetcode.com/problems/add-two-numbers/ */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> ans1,ans2,ans;
        while(l1) {
            ans1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2) {
            ans2.push_back(l2->val);
            l2=l2->next;
        }
        
        int i=0,j=0,c=0;
        while (i<ans1.size() && i<ans2.size()) {
            ans.push_back((ans1[i]+ans2[i]+c)%10);
            if((ans1[i]+ans2[i]+c)>9) c=1;
            else c=0;
            i++;
        }
        while (i<ans1.size()) {
            ans.push_back((ans1[i]+c)%10);
            if((ans1[i]+c)>9) c=1;
            else c=0;
            i++;
        }
        while (i<ans2.size()) {
            ans.push_back((ans2[i]+c)%10);
            if((ans2[i]+c)>9) c=1;
            else c=0;
            i++;
        }
        if(c)
            ans.push_back(c);
        
        for(i=0;i<ans.size();i++) {
            ListNode *l=new ListNode();
            if (l1==NULL){
                l->val=ans[i];
                l1=l;
                l2=l;
            }
            else{
                l->val=ans[i];
                l2->next=l;
                l2=l2->next;
            }
        }
        return l1;
    }
};