class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        for(auto it : mp){
            if(it.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};