class Solution {
public:
    bool checkGoodInteger(int n) {
        int sqSum = 0, digSum = 0;
        int dig, temp = n;
        while(temp != 0) {
            dig = temp % 10;
            temp /= 10;
            digSum += dig;
            sqSum += (dig*dig);
        }
        return ((sqSum - digSum) >= 50);
    }
};