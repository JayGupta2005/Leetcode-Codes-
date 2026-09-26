class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        map<string,string> mp;
        for(int i=0; i<kn.size(); i++){
            mp[kn[i][0]] = kn[i][1];
        }
        for(auto it : mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        string toFind = "";
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                while(s[i] != ')' && i < s.size()){
                    if(s[i] != '(' && s[i] != ')'){
                        toFind += s[i]; 
                    }
                    i++;
                }
                if(mp.count(toFind)){
                    ans += mp[toFind];
                }else{
                    ans += '?';
                }
                toFind = "";
            }else{
                ans += s[i];
            }
        }
        return ans;
    }
};