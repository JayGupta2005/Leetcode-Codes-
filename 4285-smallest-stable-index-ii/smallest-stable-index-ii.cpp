class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prifixMax(n, -1);
        vector<int> suffixMin(n, -1);
        // prifix Max
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
            prifixMax[i] = maxi;
        }
        // for(int i=0; i<nums.size(); i++){
        //     cout<<prifixMax[i];
        // }
        // suffix Min
        int mini = INT_MAX;
        for(int i=nums.size()-1; i>=0; i--){
            mini = min(mini, nums[i]);
            suffixMin[i] = mini;
        }
        // for(int i=0; i<nums.size(); i++){
        //     cout<<suffixMin[i];
        // }
        //finding idx
        for(int i=0; i<nums.size(); i++){
            int val = prifixMax[i] - suffixMin[i];
            if(val <= k){
                return i;
            }
        }
        return -1;
    }
};