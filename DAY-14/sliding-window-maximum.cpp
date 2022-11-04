/* https://leetcode.com/problems/sliding-window-maximum/ */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        map<int,int> m;
        for(int i=0;i<k;i++) m[nums[i]]++;
        vector<int> ans;
        auto it=m.end();
            --it;
        ans.push_back(it->first);
        for(int i=1;i<nums.size()-k+1;i++) {
            m[nums[i-1]]--;
            if(!m[nums[i-1]]) m.erase(nums[i-1]);
            m[nums[i+k-1]]++;
            auto it=m.end();
            --it;
            ans.push_back(it->first);
        }
        return ans;
    }
};