class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i+=2) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        return arr;
    }
};