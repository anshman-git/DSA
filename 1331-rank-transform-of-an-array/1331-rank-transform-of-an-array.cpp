class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sa = arr;
        sort(sa.begin(),sa.end());
        unordered_map<int,int> rmap;
        int rank = 0;
        for(int num:sa) {
            if(rmap.find(num) == rmap.end()) {
                rank++;
                rmap[num] = rank;
            }
        }
        vector<int> res;
        for(int num:arr) {
            res.push_back(rmap[num]);
        }
        return res;
    }
};