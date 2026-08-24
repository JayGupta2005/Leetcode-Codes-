class NumArray {
    vector<int> s;

public:
    NumArray(vector<int>& nums) {
        s = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;

        for(int i = left; i <= right; i++) {
            sum = sum + s[i];
        }

        return sum;
    }
};