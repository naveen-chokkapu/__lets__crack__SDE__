/* https://leetcode.com/problems/combination-sum/ */

class Solution {
public:
    vector<int> temp;
    void f(vector<vector<int>> &res,vector<int> v,int t,int i,int n) {
        if(i==n) {
            if(t==0) res.push_back(temp);
            return;
        }
        if(v[i]<=t) {
            temp.push_back(v[i]);
            f(res,v,t-v[i],i,n);
            temp.pop_back();
        }
        f(res,v,t,i+1,n);
    }
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        vector<vector<int>> res;
        f(res,v,t,0,v.size());
        return res;
    }
};