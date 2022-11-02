/* https://leetcode.com/problems/next-greater-element-ii */

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++) {
            bool f=0;
            for(int j=i+1;j<nums.size();j++) {
                if(nums[j]>nums[i]) {
                    f=1;
                    res.push_back(nums[j]);
                    break;
                }
            }
            if(f) continue;
            for(int j=0;j<i;j++) {
                if(nums[j]>nums[i]) {
                    f=1;
                    res.push_back(nums[j]);
                    break;
                }
            }
            if(!f) res.push_back(-1);
        }
        return res;
    }
};