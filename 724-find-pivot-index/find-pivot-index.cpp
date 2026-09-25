class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();


        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total = total + nums[i];
        }
        int leftsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if(leftsum == total - leftsum - nums[i]) {
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};