class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        int leftSum = 0;
        for(int i=0; i<nums.size(); i++){
            int rightSum = sum-leftSum;
            leftSum += nums[i];
            int val = rightSum-leftSum;
            if(val < 0){
                val = -val;
            }
            ans.push_back(val);
        }
        return ans;
    }
};