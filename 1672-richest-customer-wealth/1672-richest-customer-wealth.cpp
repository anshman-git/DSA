class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int msum = 0,res = 0;
        for(int i = 0; i < accounts.size(); i++) {
            msum = 0;
            for(int j = 0; j < accounts[i].size(); j++) {
                msum += accounts[i][j];
            }
        if(res < msum) {
            res = msum;
        }
    }
    return res;
    }
};