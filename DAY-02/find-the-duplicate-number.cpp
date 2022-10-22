/* https://leetcode.com/problems/find-the-duplicate-number/ */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int c;
        for(auto i:mp){
            if(i.second>1) {
            c=i.first; break;}
        }
        return c;
    }
};