class Solution {
    int atMost(vector<int>& nums, int goal) {

        if(goal < 0)
            return 0;

        int st = 0;
        int end = 0;
        int sum = 0;
        int count = 0;

        while(end < nums.size()) {

            sum += nums[end];

            while(sum > goal) {
                sum -= nums[st];
                st++;
            }

            count += end - st + 1;

            end++;
        }

        return count;
    }

public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};