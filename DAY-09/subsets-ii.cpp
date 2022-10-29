/* https://leetcode.com/problems/subsets-ii/ */

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        unordered_map<string,int> m;
        
        for(int i=0;i<pow(2,nums.size());i++) {
            vector<int> ans;
            string st;
            for(int j=0;j<nums.size();j++) {
                if(i&(1<<j)) {
                    ans.push_back(nums[j]);
                    st+=to_string(nums[j]);
                }
            }
            if(!m[st]) {
                res.push_back(ans);
                m[st]++;
            }
        }
        return res;
    }
};