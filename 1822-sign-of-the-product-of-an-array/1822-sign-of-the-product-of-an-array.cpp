class Solution {
public:
    int signFunc(double x) {
        if(x>0) return 1;
        else if(x<0) return -1;
        else return 0;
    }
    int arraySign(vector<int>& nums) {
        double mul=1;
        for(int x:nums) mul*=x;
        return signFunc(mul);
    }
};