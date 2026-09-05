class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int> res;
        int count = 1;
        for(int i=1; i<deck.size(); i++){
            if(deck[i] == deck[i-1]){
                count++;
            }else{
                res.push_back(count);
                count = 1;
            }
        }
        res.push_back(count);
        for(int val : res){
            cout<<val<<" ";
        }
        int g = 0;
        for(int i=0; i<res.size(); i++){
            g = gcd(g, res[i]);
        }
        return g>=2;
        // return false;
    }
};