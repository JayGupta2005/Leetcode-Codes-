class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit = n%2;
        n =  n/2;
        while(n>0){
            int digit = n%2;
            if(digit == bit){
                return false;
            }else{
                bit = digit;
            }
            n = n/2;
        }
        return true;
    }
};