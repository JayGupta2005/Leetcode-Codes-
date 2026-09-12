class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        int pair = 0;
        int noPair = 0;

        for(auto it : mp){
            int addPair = it.second/2;
            int notPair = it.second%2;
            pair = pair + addPair;
            noPair += notPair;
        }
        return {pair, noPair};
    }
};