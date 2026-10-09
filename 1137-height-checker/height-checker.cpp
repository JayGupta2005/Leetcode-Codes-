class Solution {
public:
    int heightChecker(vector<int>& ht) {
        int ct = 0;
        vector<int> expected = ht;
        sort(expected.begin(), expected.end());
        for(int i=0; i<ht.size(); i++){
            if(ht[i] != expected[i]){
                ct++;
            }
        }
        return ct;
    }
};