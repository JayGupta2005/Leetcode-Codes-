class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long totalSum = 0;
        for(int x : nums) {
            totalSum += x;
        }
        long long prefixSum = 0;
        long long minAvg = LLONG_MAX;
        int idx = 0;
        for(int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            long long leftAvg = prefixSum / (i + 1);
            long long rightSum = totalSum - prefixSum;
            long long rightAvg = 0;

            if(i != nums.size() - 1) {
                rightAvg = rightSum / (nums.size() - i - 1);
            }
            long long diff = abs(leftAvg - rightAvg);
            if(diff < minAvg) {
                minAvg = diff;
                idx = i;
            }
        }
        return idx;
    }
};