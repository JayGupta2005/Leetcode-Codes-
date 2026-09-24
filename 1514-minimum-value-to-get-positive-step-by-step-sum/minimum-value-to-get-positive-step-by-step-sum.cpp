class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minVal = INT_MAX;
        int sum = 0;
        for(int x : nums){
            sum += x;
            minVal = min(minVal, sum);
        }
        if(minVal < 1){
            return 1-minVal;
        }        
        return 1;
    }
};