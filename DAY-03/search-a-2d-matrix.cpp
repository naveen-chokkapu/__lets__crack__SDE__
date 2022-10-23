/* https://leetcode.com/problems/search-a-2d-matrix/ */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++) {
            int l=0,h=matrix[0].size();
            while(l<=h && l<matrix[0].size() && h>=0) {
                int m=(l+h)/2;
                if(matrix[i][m]==target) return 1;
                if(matrix[i][m]>target) h=m-1;
                else l=m+1;
            }
        }
        return 0;
    }
};