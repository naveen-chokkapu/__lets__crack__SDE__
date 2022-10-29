/* https://www.codingninjas.com/codestudio/problems/subset-sum_3843086 */

vector<int> subsetSum(vector<int> &num)
{
    vector<int> res;
    for(int i=0;i<pow(2,num.size());i++) {
        int s=0;
        for(int j=0;j<num.size();j++) {
            if(i&(1<<j))
                s+=num[j];
        }
        res.push_back(s);
    }
    sort(res.begin(),res.end());
    return res;
}