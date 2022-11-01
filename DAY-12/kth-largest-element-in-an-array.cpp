/* https://leetcode.com/problems/kth-largest-element-in-an-array/ */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(auto i:nums)
            p.push(i);
        while(p.size()!=k)
            p.pop();
        return p.top();
    }
};