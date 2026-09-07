class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size()-1; i++){
            //find first digit
            int n = nums[i];
            int first = -1;
            while(n > 0){
                int last = n%10;
                n = n/10;
                first = last;
            }
            for(int j = i+1; j<nums.size(); j++){
                int n = nums[j];
                int last = n%10;
                if(gcd(first, last) == 1){
                    count++;
                }
            }
        }
        return count;
    }
};