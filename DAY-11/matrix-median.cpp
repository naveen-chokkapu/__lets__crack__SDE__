/* https://www.codingninjas.com/codestudio/problems/873378 */

#include <bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    vector<int> res;
        for(auto i:matrix) {
            for(auto j:i) res.push_back(j); 
        }
        sort(res.begin(),res.end());
        return res[res.size()/2];
}