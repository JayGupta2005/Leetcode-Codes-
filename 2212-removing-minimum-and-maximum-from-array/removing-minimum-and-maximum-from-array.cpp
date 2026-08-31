class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int maxIdx = 0;
        int minIdx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>= maxi){
                maxIdx = i;
                maxi = nums[i];
            }
            if(nums[i]<= mini){
                minIdx = i;
                mini = nums[i];
            }
        }
        // cout<<maxIdx<<endl;
        // int pos1 = max(maxIdx, minIdx);
        // cout<<minIdx;
        int n = nums.size();
        //from front
        int pos1 = max(maxIdx, minIdx)+1;
        //from back
        int backIdxMax = n - maxIdx;
        int backIdxMin = n - minIdx;
        int pos2 = max(backIdxMax, backIdxMin);
        //from both side;
        //for max
        int p1 = min(maxIdx+1, backIdxMax);
        //for min
        int p2 = min(minIdx+1, backIdxMin);
        //both
        int p = p1+p2;

        return min({pos1, pos2, p});

    }
};