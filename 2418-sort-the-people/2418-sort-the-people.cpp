class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int size = names.size();
        unordered_map<int, string> maps;

        for(int i=0;i<size;i++) {
            maps[heights[i]]=names[i];
        }

        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<size;++i) {
            names[i] = maps[heights[i]];
        }
        return names;
    }
};