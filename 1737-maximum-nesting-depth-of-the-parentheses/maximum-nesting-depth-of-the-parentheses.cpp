class Solution {
public:
    int maxDepth(string s) {
        int maxC = INT_MIN;
        int c = 0;
        bool isExist = false;
        for(char ch : s){
            if(ch == '('){
                c++;
                maxC = max(maxC, c);
                isExist = true;
            }else if(ch == ')'){
                c--;
            }
        }
        if(!isExist){
            return 0;
        }
        return maxC;
    }
};