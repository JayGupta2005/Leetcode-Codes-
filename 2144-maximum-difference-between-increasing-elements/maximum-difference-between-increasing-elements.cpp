class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1;
        for(int i = 0; i<nums.size()-1; i++){
            int diff = -1;
            for(int j= i+1; j<nums.size(); j++){
                if(nums[j] > nums[i]){
                    diff = nums[j]-nums[i];
                    maxDiff = max(maxDiff, diff);
                }
            }
        }
        return maxDiff;
    }
};