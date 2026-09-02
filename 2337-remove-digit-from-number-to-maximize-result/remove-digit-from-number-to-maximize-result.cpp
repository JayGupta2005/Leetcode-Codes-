class Solution {
public:
    string removeDigit(string num, char digit) {
        int pos = -1;
        for(int i=0; i<num.length(); i++){
            if(num[i] == digit){
                pos = i;
                if(i+1 < num.length() && num[i+1] > num[i]){
                    break;
                }
            }
        }
        num.erase(pos,1);
        return num;
    }
};