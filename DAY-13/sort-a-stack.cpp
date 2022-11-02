/* https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275 */

#include <bits/stdc++.h> 
void sortStack(stack<int> &s)
{
    vector<int> res;
    while(!s.empty()) {
        res.push_back(s.top());
            s.pop();
    }
    sort(res.begin(),res.end());
    for(auto i:res) s.push(i);
}