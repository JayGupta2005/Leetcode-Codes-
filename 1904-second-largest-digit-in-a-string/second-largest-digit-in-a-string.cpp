class Solution {
public:
    int secondHighest(string s) {
        int secMax = INT_MIN;
        int firstMax = INT_MIN;
        for(int i=0; i<s.length(); i++){
            int num = s[i] - '0';
            if(num >= 0 && num <= 9){
                if(num > firstMax){
                    secMax = firstMax;
                    firstMax = num;
                }else if(num > secMax && num != firstMax){
                    secMax = num;
                }
            }
        }
        if(secMax == INT_MIN){
            return -1;
        }
        return secMax;
    }
};