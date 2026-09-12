class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        //store in map
        for(int val : nums){
            if(val % 2 == 0){
                mp[val]++;
            }
        }
        //find
        int ans = -1;
        int a = -1;
        for(auto it: mp){
            if(it.second > ans){
                a = it.first;
                ans = it.second;
            }
        }
        return a;
    }
};