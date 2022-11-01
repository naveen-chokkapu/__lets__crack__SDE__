/* https://www.codingninjas.com/codestudio/problems/min-heap_4691801 */

#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    /* min heap */
    priority_queue<int,vector<int>,greater<int>> p;
    vector<int> res;
    for(auto i:q) {
        if(i[0]==0) p.push(i[1]);
        else {
            res.push_back(p.top());
            p.pop();
        }
    }
    return res;
}
