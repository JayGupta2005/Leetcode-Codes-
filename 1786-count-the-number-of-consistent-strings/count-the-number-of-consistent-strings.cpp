class Solution {
public:
    int countConsistentStrings(string all, vector<string>& words) {
        set<char> s1;
        int ans = 0;
        for(int i=0; i<all.size(); i++){
            s1.insert(all[i]);
        }
        for(int i=0; i<words.size(); i++){
            bool flag = true;
            for(int j = 0; j<words[i].size(); j++){
                if(!s1.count(words[i][j])){
                    flag = false;
                }
            }
            if(flag){
                ans++;
            }
        }
        return ans;
    }
};