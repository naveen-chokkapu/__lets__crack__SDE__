/* https://leetcode.com/problems/maximum-subarray/ */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums[0],c=0,i;
        for(i=0;i<nums.size();i++){
            c+=nums[i];
            s=max(s,c);
            if(c<0) c=0;
        }
        return s;
    }
};