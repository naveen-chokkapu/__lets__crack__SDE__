/* https://www.codingninjas.com/codestudio/problems/count-inversions_615 */

long long getInversions(long long *arr, int n)
{
    long long c=0,i;
    map<int,int> m;
    for(i=0;i<n;i++) {
        for(auto it:m) {
            if(it.first>arr[i])
                c+=it.second;
        }
        m[arr[i]]++;
    }
    return c;
}