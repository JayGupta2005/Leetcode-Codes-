class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++) {
            set<char> s1;
            for(char ch : words[i]) {
                s1.insert(ch);
            }
            for(int j = i + 1; j < words.size(); j++) {
                set<char> s2;
                for(char ch : words[j]) {
                    s2.insert(ch);
                }
                if(s1 == s2) {
                    ans++;
                }
            }
        }
        return ans;
    }
};