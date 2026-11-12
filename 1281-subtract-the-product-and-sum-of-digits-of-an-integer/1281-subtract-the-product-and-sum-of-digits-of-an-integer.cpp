class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit,temp=n;
        int sum = 0, pro = 1;
        while(temp != 0) {
            digit = temp % 10;
            temp /= 10;
            sum += digit;
            pro *= digit;
        }
        return pro - sum;
    }
};