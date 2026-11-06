class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ns = nums1.size();
        int ms = nums2.size();
        int res = 0;
        for(int i = 0; i < ns; i++) {
            for(int j = 0; j < ms; j++) {
                if(nums1[i] % (k * nums2[j]) == 0) {
                    res++;
                }
            }
        }
        return res;
    }
};