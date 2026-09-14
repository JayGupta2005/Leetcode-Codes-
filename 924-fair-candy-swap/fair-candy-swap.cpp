class Solution {
public:
    vector<int> fairCandySwap(vector<int>& ali, vector<int>& bob) {
        // alice total;
        int aliSum = 0;
        for(int val : ali){
            aliSum += val;
        }
        //bob sum
        int bobSum = 0;
        for(int val : bob){
            bobSum += val;
        }
        //finding ans
        vector<int> ans;
        for(int i=0; i<ali.size(); i++){
            for(int j=0; j<bob.size(); j++){
                int val1 = aliSum + bob[j] - ali[i];
                int val2 = bobSum + ali[i] - bob[j];
                if(val1 == val2){
                    return {ali[i], bob[j]};
                }
            }
        }
        return {-1,-1};
    }
};