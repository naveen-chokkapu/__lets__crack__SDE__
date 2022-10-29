/* https://leetcode.com/problems/permutation-sequence/ */

class Solution {
public:
    long long fact(int n) {
        if(n==1) return 1;
        return fact(n-1)*n;
    }
    string getPermutation(int n, int k) {
        string s="";
        int i,q=fact(n)/n;
        for(i=1;i<=n;i++) {
            if(k<=q*i) {
                s+=to_string(i);
                k-=q*(i-1);
                break;
            }
        }
        for(i=1;i<=n;i++) {
            int e=s[0]-'0';
            if(i!=e) s+=to_string(i);
        }
        if(k==1) return s;
        --k;
        while(next_permutation(s.begin(),s.end())) {
            --k;
            if(k==0) return s;
        }
        return s;
    }
};