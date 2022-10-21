/* https://leetcode.com/problems/set-matrix-zeroes/ */

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>> ans;
        int i,j,k1,k2;
        for(i=0;i<m.size();i++) {
            for(j=0;j<m[0].size();j++) {
                if(!m[i][j]) ans.push_back({i,j});
            }
        }
        for(i=0;i<ans.size();i++) {
            k1 = ans[i].first;
            k2 = ans[i].second;
            for(j=0;j<m[0].size();j++) { m[k1][j]=0; }
            for(j=0;j<m.size();j++) { m[j][k2]=0; }
        }
    }
};