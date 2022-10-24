/* https://leetcode.com/problems/two-sum/ */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            if(m[t-nums[i]]) return {i,m[t-nums[i]]-1};
            m[nums[i]]=i+1;
        }
        return {0};
    }
};