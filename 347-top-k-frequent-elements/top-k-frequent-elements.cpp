class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //create map and store in map
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        //store in pair
        vector<pair<int,int>> v(mp.begin(), mp.end());
        //sort based upon freq greater
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        //store k freq in arr
        vector<int> ans;
        int n = v.size();
        if(k <= n){
            for(int i=0; i<k; i++){
                ans.push_back(v[i].first);
            }
        }else{
            for(int i=0; i<n; i++){
                ans.push_back(v[i].first);
            }
        }
        return ans;
    }
};