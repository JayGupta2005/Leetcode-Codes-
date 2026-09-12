class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        //store in map
        for(char ch : s){
            mp[ch]++;
        }
        // make vector of pair
        vector<pair<int,int>> v(mp.begin(), mp.end());
        // short based upon second value
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        //now store in string
        string ans = "";
        for(int i=0; i<v.size(); i++){
            while(v[i].second > 0){
                ans += v[i].first;
                v[i].second--;
            }
        }
        return ans;
    }
};