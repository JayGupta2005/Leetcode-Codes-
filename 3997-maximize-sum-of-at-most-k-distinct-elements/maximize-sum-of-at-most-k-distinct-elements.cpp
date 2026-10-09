class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        priority_queue<int> pq;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        while(!pq.empty() && k > 0){
            int curr = pq.top();
            pq.pop();
            if(ans.empty() || ans.back() != curr){
                ans.push_back(curr);
                k--;
            }
        }
        return ans;
    }
};