class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // vector<int> op(score.begin(), score.end());
        vector<int> op = score;
        int n = score.size();
        vector<string> ans;
        if(n < 2){
            ans.push_back("Gold Medal");
            return ans;
        }
        sort(score.begin(), score.end(), greater<int>());
        map<int,string> mp;
        for(int i=0; i<score.size(); i++){
            if(i == 0){
                mp[score[i]] = "Gold Medal";
            }else if( i == 1){
                mp[score[i]] = "Silver Medal";
            }else if( i == 2){
                mp[score[i]] = "Bronze Medal";
            }else{
                mp[score[i]] = to_string(i+1);
            }
        }
        for(int i = 0; i < op.size(); i++) {
            if(mp.count(op[i])) {
                ans.push_back(mp[op[i]]);
            }
        }
        return ans;
    }
};