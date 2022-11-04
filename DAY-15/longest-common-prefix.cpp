/* https://leetcode.com/problems/longest-common-prefix/ */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int i,j;
        for(i=0;i<strs[0].size();i++){
            unordered_set<char> ss;
            for(j=0;j<strs.size();j++){
                if(strs[j]=="") return "";
                 ss.insert(strs[j][i]);
            }
            if(ss.size()==1) s+=strs[j-1][i];
            else break;
        }
        return s;
    }
};