class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            set<int> left;
            set<int> right;
            for(int j = 0; j <= i; j++) {
                left.insert(nums[j]);
            }
            for(int j = i + 1; j < n; j++) {
                right.insert(nums[j]);
            }
            int val = left.size() - right.size();
            ans.push_back(val);
        }

        return ans;
    }
};