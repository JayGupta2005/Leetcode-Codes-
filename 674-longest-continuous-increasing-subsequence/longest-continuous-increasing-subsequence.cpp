class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int maxCount = INT_MIN;
        if(nums.size()<2){
            return count;
        }
        int st = 0;
        int sec = 1;
        while(sec<nums.size()){
            if(nums[sec]>nums[st]){
                count++;
                st++;
                sec++;
                maxCount = max(maxCount,count);
            }else{
                count = 1;
                st++;
                sec++;
                maxCount = max(maxCount,count);
            }
        }
        return maxCount;
    }
};