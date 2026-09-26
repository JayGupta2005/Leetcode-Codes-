class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        set<char> se;
        for(int i = 0; i<s.size(); i++){
            if(mp.count(s[i])){
                if(mp[s[i]] != t[i]){
                    return false;
                }
            }else{
                if( se.count(t[i])){
                    return false;
                }
                mp[s[i]] = t[i];
                se.insert(t[i]);
            }
        }
        return true;
    }
};