/* https://leetcode.com/problems/majority-element/ */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int c;
        for(auto i:mp){
            if(i.second>nums.size()/2)
            {c=i.first;break;}
        }
        return c;
    }
};