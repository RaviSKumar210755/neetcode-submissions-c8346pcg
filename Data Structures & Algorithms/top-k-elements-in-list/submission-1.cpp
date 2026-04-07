class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto &it:nums) mp[it]++;
        vector<int> ans;
        vector<pair<int,int>> v;
        for(auto &it: mp) v.push_back({it.second, it.first});
        sort(v.rbegin(),v.rend());
        for(int i = 0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
