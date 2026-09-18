class Solution {
public:
    int gcd(int a, int b) {
        while(b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int l = 1;

            for(int j = i; j < nums.size(); j++) {
                l = (l / gcd(l, nums[j])) * nums[j];
                if(l == k){
                    count++;
                }
                if(l > k){
                    break;
                }
            }
        }
        return count;
    }
};