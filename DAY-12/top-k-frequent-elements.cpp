/* https://leetcode.com/problems/top-k-frequent-elements/ */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> p;
        map<int,int> m;
        for(auto i:nums) m[i]++;
        for(auto i:m) {
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());
        vector<int> ans;
        for(int i=p.size()-k;i<p.size();i++)
                ans.push_back(p[i].second);
        return ans;
    }
};