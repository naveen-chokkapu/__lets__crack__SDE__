/* https://leetcode.com/problems/longest-substring-without-repeating-characters/ */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,c=1,x=0;
        unordered_set<char> st;
        
        for(i=0;i<s.size();i++) {
            st.insert(s[i]);
            if(st.size()!=c){
                st.clear();
                x=max(x,c);
                i-=c-1; c=0;
            }
            c++;
        }
        return max(x,c)-1;
    }
};