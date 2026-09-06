class Solution {
public:
    int maxConsecutive(int bot, int top, vector<int>& sp) {
        //if sp size < 2
        sort(sp.begin(), sp.end());
        if(sp.size()<2){
            int left = sp[0] - bot;
            int right = top - sp[0];
            if(left > right){
                return left;
            }else{
                return right;
            }
        }
        // now for more than size 2
        int maxDis = 0;
        for(int i=0; i<sp.size(); i++){
            if(i == 0){
                int left = sp[i] - bot;
                int right = sp[i+1] - sp[i]-1;
                maxDis = max(maxDis,max(left, right));
            }else if( i == sp.size()-1){
                int right = top - sp[i];
                int left = sp[i] - sp[i-1]-1;
                maxDis = max(maxDis,max(left, right));
            }else{
                int left = sp[i]-sp[i-1]-1;                
                int right = sp[i+1] - sp[i]-1;
                maxDis = max(maxDis,max(left, right));
            }
        }
        return maxDis;
    }
};