class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int idx = 0;
        int len = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while(sum >= target) {
                len = min(len, i - idx + 1);
                sum -= nums[idx];
                idx++;
            }
        }
        if(len == INT_MAX){
            return 0;
        }

        return len;
    }
};