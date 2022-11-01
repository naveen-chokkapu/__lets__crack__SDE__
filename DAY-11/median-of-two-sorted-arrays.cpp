/* https://leetcode.com/problems/median-of-two-sorted-arrays/ */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int i=0,j=0,n1=a.size(),n2=b.size(),n=n1+n2,k=0;
        vector<int> c(n);
        while (i<n1 and j<n2) {
            if(a[i]<b[j]) c[k++]=a[i++];
            else c[k++]=b[j++];
        }
        while (i<n1) c[k++]=a[i++];
        while (j<n2) c[k++]=b[j++];
        if(n&1) return (double)c[n/2];
        else  return (double)(c[n/2-1]+c[n/2])/2;
    }
};