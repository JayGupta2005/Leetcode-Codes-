class Solution {
public:
    int myAtoi(string s) {
        long long val = 0;
        //base case
        if(s.size()<1){
            return 0;
        }
        //remove white space 
                int i = 0;
                while(i<s.size() && s[i]==' '){
                    i++;
                }
        //check sign
        int sign = 1;
        if(i<s.size() && s[i] == '-'){
            sign = -1;
            i++;
        }else if(i<s.size() && s[i] == '+'){
            i++;
        }
        //val
        while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int v = s[i] - '0';
            val = val * 10 + v;
            if(sign == 1 && val > INT_MAX){
                return INT_MAX;
            }

            if(sign == -1 && -val < INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return val * sign;
    }
};