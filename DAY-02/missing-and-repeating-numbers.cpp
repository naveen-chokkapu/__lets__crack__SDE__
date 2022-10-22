/* https://www.codingninjas.com/codestudio/problems/873366 */

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	map<int,int> m;
    pair<int,int> p;
    for(auto i:arr) m[i]++;
    for(int i=1;i<=n;i++) {
        if(!m[i]) p.first=i;
        if(m[i]==2) p.second=i;
    }
    return p;
}