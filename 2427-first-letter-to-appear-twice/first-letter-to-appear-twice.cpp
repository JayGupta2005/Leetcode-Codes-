class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        for(char ch : s){
            if(st.count(ch)){
                return ch;
            }else{
                st.insert(ch);
            }
        }
        return 'a';
    }
};