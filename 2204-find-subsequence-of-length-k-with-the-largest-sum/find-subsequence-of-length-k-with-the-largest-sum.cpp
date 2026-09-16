class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> p;
        for(int i = 0; i < nums.size(); i++){
            p.push_back({nums[i], i});
        }
        sort(p.begin(), p.end(), [](auto &a, auto &b){
            return a.first > b.first;
        });
        vector<int> ans(nums.size());
        vector<bool> used(nums.size(), false);
        for(int i = 0; i < k; i++){
            int pos = p[i].second;
            ans[pos] = p[i].first;
            used[pos] = true;
        }
        vector<int> result;
        for(int i = 0; i < ans.size(); i++){
            if(used[i]){
                result.push_back(ans[i]);
            }
        }

        return result;
    }
};