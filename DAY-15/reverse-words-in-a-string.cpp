/* https://leetcode.com/problems/reverse-words-in-a-string/ */

class Solution {
public:
    string reverseWords(string s) {
        string x,t;
        int j=0;
        while(s[j]==' '&&j<s.size()) j++;
        for(;j<s.size();j++) {
            if(s[j]==' '){
                while(s[j]==' '&&j<s.size()) j++;
                if(j==s.size()) break;
                x+=' ';
            }
            x+=s[j];
        }
        stack<string> st;
        for(int i=0;i<x.size();i++) {
            if(x[i]==' ') {
                st.push(t); t.clear();
            }
            else t+=x[i];
        }
        st.push(t);  x="";
        while(!st.empty()) {
            x+=st.top();  
            st.pop();
            if(!st.empty()) x+=' ';
        }
        return x;
    }
};