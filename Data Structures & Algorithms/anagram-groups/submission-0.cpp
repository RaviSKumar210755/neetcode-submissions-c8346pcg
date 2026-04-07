class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp;
        for(auto &it: strs){
            vector<int> v(26,0);
            int n = it.size();
            for(int i = 0;i<n;i++) v[it[i] - 'a']++;
            mp[v].push_back(it);
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
