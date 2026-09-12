class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        vector<pair<int,int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.second != b.second){
                return a.second < b.second;
            }
            return a.first > b.first;
        });

        for(int i=0; i<v.size(); i++){
            while(v[i].second > 0){
                ans.push_back(v[i].first);
                v[i].second--;
            }
        }
        return ans;
    }
};