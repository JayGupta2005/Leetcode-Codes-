class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(i >=k){
                sum = sum - nums[i-k];
            }
            if(i >= k-1){
                maxSum = max(maxSum, sum);
            }
        }
        return (double)maxSum/k;
    }
};