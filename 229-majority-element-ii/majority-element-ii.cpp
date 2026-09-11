class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // if(n < 2){
        //     return nums;
        // }
        map<int, int> mp;
        for(int i=0; i<n ; i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto it: mp){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};