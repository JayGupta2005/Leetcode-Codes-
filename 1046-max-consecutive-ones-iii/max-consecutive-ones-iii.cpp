class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;
        int maxCount = 0;

        for(int right = 0; right < nums.size(); right++) {

            if(nums[right] == 0) {
                k--;
            }

            while(k < 0) {
                if(nums[left] == 0) {
                    k++;
                }
                left++;
            }

            count = right - left + 1;
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};