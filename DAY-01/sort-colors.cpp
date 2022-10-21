/* https://leetcode.com/problems/sort-colors/ */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o=0,t=0,z=0,i;
        for(i=0;i<nums.size();i++) {
            if(nums[i]==0) z++;
            else if(nums[i]==1) o++;
            else t++;
        }
        for(i=0;i<nums.size();i++) {
            if(i<z) nums[i]=0;
            else if(i<z+o) nums[i]=1;
            else nums[i]=2;
        }
    }
};