class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        int oddIdx = 1;
        int evenIdx = 0;
        for(int i=0; i<n; i++){
            if(nums[i]%2 == 0){
                ans[evenIdx] = nums[i];
                evenIdx += 2; 
            }else{
                ans[oddIdx] = nums[i];
                oddIdx += 2; 
            }
        }
        return ans;
    }
};