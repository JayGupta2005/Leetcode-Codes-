class Solution {
public:
    int minSteps(string s, string t) {
        map<int,int> mp1, mp2;
        for(char ch : s){
            mp1[ch]++;
        }
        for(char ch : t){
            mp2[ch]++;
        }
        int ans = 0;
        for(auto it : mp1){
            if(it.second > mp2[it.first]) {
                ans += it.second - mp2[it.first];
            }
        }
        return ans;
    }
};