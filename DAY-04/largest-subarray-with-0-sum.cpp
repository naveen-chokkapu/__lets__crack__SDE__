/* https://www.codingninjas.com/codestudio/problems/920321 */

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int i,j,c,s=0;
    for(i=0;i<arr.size();i++) {
        c=0;
        for(j=i;j<arr.size();j++) {
            c+=arr[j];
            if(c==0) s=max(s,abs(i-j)+1);
        }
    }
    return s;
}