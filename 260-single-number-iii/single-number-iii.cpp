class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        nums.clear();
        for(auto it: mp){
            if(it.second == 1){
                nums.push_back(it.first);
            }
        }
        return nums;
    }
};