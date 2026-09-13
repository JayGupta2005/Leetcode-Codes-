class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>st;
        int s = 0;
        int count = 0;
        int end = nums.size()-1;
        long long sum = 0;
        while(s <= end){
            sum += nums[s];
            st.push_back(sum);
            s++;
            if(s > end){
                count++;
                s = count;
                sum = 0;
            }
        }
        sort(st.begin(), st.end());
        long long ans = 0;
        for(int i=left-1; i<right; i++){
            ans += st[i];
        }
        return ans % 1000000007;;
    }
};