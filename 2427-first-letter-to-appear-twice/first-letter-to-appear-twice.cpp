class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mp;
        for(char ch : s){
            if(mp.count(ch)){
                return ch;
            }else{
                mp[ch]++;
            }
        }
        return 'a';
    }
};