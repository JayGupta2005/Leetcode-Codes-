class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            ans+= s[i];
            if(s[i] == ' '){
                k--;
                cout<<ans<<" "<<k<<endl;
            }
            if(k == 0 && s[i] != s.size()-1){
                ans.pop_back();
                return ans;
            }
        }
        return ans;
    }
};