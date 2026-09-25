class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int st = 0;
        int secSt = n;
        vector<int> ans;
        while(st < n){
            ans.push_back(nums[st]);
            ans.push_back(nums[secSt]);
            st++;
            secSt++;
        }
        return ans;
    }
};