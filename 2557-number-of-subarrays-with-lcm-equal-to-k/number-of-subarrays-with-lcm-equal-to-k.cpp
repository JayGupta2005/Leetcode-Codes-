class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int l = nums[i];
            if(l == k) {
                count++;
            }
            for(int j = i+1; j<nums.size(); j++){
                l = lcm(l,nums[j]);
                if(l == k){
                    count++;
                }
                if(l>k){
                    break;
                }
            }
        }
        return count;
    }
};