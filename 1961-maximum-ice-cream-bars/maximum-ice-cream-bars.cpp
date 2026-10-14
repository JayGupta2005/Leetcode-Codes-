class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int t = 0;
        sort(costs.begin(), costs.end());
        for(int i=0; i<costs.size(); i++){
            if(costs[i] <= coins){
                coins = coins - costs[i];
                t++;
            }
        }
        return t;
    }
};