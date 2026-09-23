class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        for(int i=0; i<nums.size(); i++){
            total += nums[i];
        }
        cout<<total;
        int leftSum = 0;
        for(int i=0; i<nums.size(); i++){
            int toFind = total - nums[i];
            int rightSum = toFind - leftSum;

            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};