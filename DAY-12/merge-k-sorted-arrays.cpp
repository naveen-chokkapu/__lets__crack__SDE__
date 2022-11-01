/* https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379 */

#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> res;
    for(auto i:kArrays) {
        for(auto j:i)
            res.push_back(j);
    }
    sort(res.begin(),res.end());
    return res;
}
