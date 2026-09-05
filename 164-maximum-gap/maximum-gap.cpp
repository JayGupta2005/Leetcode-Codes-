class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int st = 0;
        int maxDiff = INT_MIN;
        while(st < nums.size()-1){
            int end = st+1;
            maxDiff = max(maxDiff, nums[end]-nums[st]);
            st++;
        }
        return maxDiff;
    }
};