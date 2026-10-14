class Solution {
public:
    int maxDistance(vector<int>& col) {
        int maxDiff = 0;
        for(int i=0; i<col.size()-1; i++){
            int diff = 0;
            for(int j=i+1; j<col.size(); j++){
                if(col[i] != col[j]){
                    diff = j-i;
                }else{
                    continue;
                }
                maxDiff = max(maxDiff, diff);
            }
        }
        return maxDiff;
    }
};