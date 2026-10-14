class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                nums[i] = nums[i]*-1;
            }
        }
        long long ans = 0;
        sort(nums.begin(), nums.end());
        int sz = nums.size() / 2;
        // if(nums.size()%2 != 0){
        //     sz = (nums.size()+1) / 2;
        // }else{
        //     sz = nums.size()/2;
        // }
        // cout<<sz;
        long long Rsum = 0;
        int end = nums.size()-1;
        // cout<<end;
        for(int i=end; i>= sz; i--){
            long long  sq = nums[i] * nums[i];
            Rsum += sq;
            cout<<Rsum<<" ";
        }
        long long Lsum = 0;
        for(int i=0; i<sz; i++){
            Lsum = Lsum + nums[i]* nums[i];
        }
        ans = Rsum - Lsum;
        return ans;
    }
};