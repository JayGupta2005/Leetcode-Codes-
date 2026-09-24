class Solution {
public:
    int maxScore(string s) {
        int total = 0;
        for(char ch : s){
            int val = ch - '0';
            total += val;
        }
        int maxSum = INT_MIN;
        int leftSum = 0;
        int oneC = 0;
        for(int i=0; i<s.size()-1; i++){
            int val = s[i] - '0';
            if(val == 0){
                leftSum++;
            }else{
                oneC++;
            }
            int rtSum = total - oneC;
            int ans = leftSum + rtSum;
            maxSum = max(maxSum,ans);
        }
        return maxSum;
    }
};