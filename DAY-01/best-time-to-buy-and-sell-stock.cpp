/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> v(prices.size());
        int i,c=-1;
        for(i=prices.size()-1;i>=0;i--){
            c=max(c,prices[i]);
            v[i]=c;
        }
        c=-1;
        for(i=0;i<prices.size();i++){
            c=max(c,abs(v[i]-prices[i]));
        }
        return c;
    }
};