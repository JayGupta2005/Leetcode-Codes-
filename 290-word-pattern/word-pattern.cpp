class Solution {
public:
    bool wordPattern(string pat, string s) {
        map<char, string> mp;
        set<string> st;
        int j = 0;
        for(int i = 0; i < pat.size(); i++) {
            if(j >= s.size()) {
                return false;
            }
            string word = "";
            while(j < s.size() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            if(j < s.size() && s[j] == ' ') {
                j++;
            }
            if(!mp.count(pat[i])) {
                if(st.count(word)) {
                    return false;
                }
                mp[pat[i]] = word;
                st.insert(word);
            }
            else {
                if(mp[pat[i]] != word) {
                    return false;
                }
            }
        }
        if(j < s.size()) {
            return false;
        }
        return true;
    }
};