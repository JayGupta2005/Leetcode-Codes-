class Solution {
public:
    string mostCommonWord(string para, vector<string>& banned) {
        int n = para.size();
        map<string, int> mp;
        string word = "";
        for(int i=0; i<=n; i++){
            if(i < n && isalpha(para[i])){
                word += tolower(para[i]);
            }
            else if(!word.empty()){
                mp[word]++;
                word = "";
            }
        }
        // return "";
        // map<string, int> mp2;
        // for(int i=0; i<banned.size(); i++){
        //     mp2[banned[i]]++;
        // }
        // for(auto it : mp2){
        //     cout<<it.first<<" "<<it.second;
        // }
        // for(int i=0; i<banned.size(); i++){
        //     if(mp.count(banned[i])){
        //         mp[banned[i]]--;
        //     }
        // }
        vector<pair<string, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(int i=0; i<v.size(); i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second;
        // }
        set<string> s;
        for(int i=0; i<banned.size(); i++){
            s.insert(banned[i]);
        }
        for(int i=0; i<v.size(); i++){
            string w = v[i].first;
            if(!s.count(w)){
                return w;
            }
        }
        return "-1";
    }
};