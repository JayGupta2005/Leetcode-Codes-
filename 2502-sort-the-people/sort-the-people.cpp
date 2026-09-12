class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& ht) {
        vector<pair<string, int>> v;
        for(int i=0; i<names.size(); i++){
            v.push_back({names[i], ht[i]});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        vector<string> ans;
        for(int i=0; i<v.size(); i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};