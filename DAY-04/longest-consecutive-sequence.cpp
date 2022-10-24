/* https://leetcode.com/problems/longest-consecutive-sequence/ */

class Solution {
public:
    vector<int> res;
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int,int> m;
        for(auto i:nums) m[i]++;
        for(auto i:m) 
            res.push_back(i.first);
        int s=-1,c=0;
        for(int i=1;i<res.size();i++) {
            if(res[i]-res[i-1]==1) c++;
            else {
                s=max(s,c);
                c=0;
            }
        }
        return max(s,c)+1;
    }
};