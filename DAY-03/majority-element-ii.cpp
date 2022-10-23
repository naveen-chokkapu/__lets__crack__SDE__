/* https://leetcode.com/problems/majority-element-ii/ */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        vector<int> v;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(i.second>n/3)
                v.push_back(i.first);
        }
        return v;
    }
};