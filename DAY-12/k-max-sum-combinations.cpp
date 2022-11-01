/* https://www.codingninjas.com/codestudio/problems/k-max-sum-combinations_975322 */

#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
    priority_queue<int> p;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            p.push(a[i]+b[j]);
        }
    }
    vector<int> res;
    while(k--) {
        res.emplace_back(p.top());
        p.pop();
    }
    return res;
}