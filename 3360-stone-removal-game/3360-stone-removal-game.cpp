class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int a=10,b=9;
        while(n>b || n>a) {
            n -= a;
            if(n<b) return true;
            a-=2;
            n -= b;
            if(n<a) return false;
            b-=2;
        }
        return false;
    }
};