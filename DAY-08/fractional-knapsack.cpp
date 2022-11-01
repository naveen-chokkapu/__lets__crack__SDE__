/* https://www.codingninjas.com/codestudio/problems/975286 */

#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    vector<pair<double,pair<int,int>>> res;
    for(auto i:items)
        res.push_back({(double)i.second/(i.first*1.0),
                       {i.second,i.first}});
    sort(res.begin(),res.end());
    double c=0,f=0;
    for(int i=res.size()-1;i>=0;i--) {
        if(c+res[i].second.second>w) {
            f+=res[i].first*(w-c);
                break;
        }
        c+=res[i].second.second;
        f+=res[i].second.first;
    }
    return f;
}