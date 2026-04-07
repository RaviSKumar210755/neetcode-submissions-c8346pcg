class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(auto &it:s) a[it - 'a']++;
        for(auto &it:t) b[it - 'a']++;
        return a == b;
    }
};
