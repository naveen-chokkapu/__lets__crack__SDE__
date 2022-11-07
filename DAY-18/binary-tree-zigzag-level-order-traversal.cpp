/* https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/ */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> ds;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int c=0;
        while(!q.empty()) {
            TreeNode *t=q.front();
            q.pop();
            if(t==NULL){
                c++;
                if(c%2==0)
                    reverse(ds.begin(),ds.end());
                ans.push_back(ds);
                ds.clear();
                if(q.size()) q.push(NULL);
            }
            else{
                ds.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return ans;
    }
};