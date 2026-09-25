class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            int sum = 0;
            while(val > 0){
                int last = val % 10;
                sum += last;
                val = val / 10;
            }
            if(sum == i){
                return i;
            }
        }
        return -1;
    }
};