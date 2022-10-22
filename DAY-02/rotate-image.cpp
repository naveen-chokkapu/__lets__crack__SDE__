/* https://leetcode.com/problems/rotate-image/ */

class Solution {
public:
    void rotate(vector<vector<int>>& ans) {
        reverse(ans.begin(),ans.end());
        int i,j;
        for(i=0;i<ans.size();i++) {
            for(j=i+1;j<ans.size();j++) {
                swap(ans[i][j],ans[j][i]);
            }
        }
    }
};