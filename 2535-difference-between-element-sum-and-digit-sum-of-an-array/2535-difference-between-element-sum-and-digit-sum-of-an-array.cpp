class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sa=0,sd=0,n,digit;
        for(int i=0;i<nums.size();i++) {
            sa+=nums[i];
            n=nums[i];
            while (n!=0) {
                digit=n%10;
                n/=10;
                sd+=digit;
            }
        }
        if(sa>sd) return sa-sd;
        else return sd-sa;
    }
};