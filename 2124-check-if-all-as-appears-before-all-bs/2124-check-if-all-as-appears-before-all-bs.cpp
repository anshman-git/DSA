class Solution {
public:
    bool checkString(string s) {
        int res = false;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='b') res=true;
            else if(s[i]=='a' && res) return false;
        }
        return true;
    }
};