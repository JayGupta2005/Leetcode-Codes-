class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        //store prevRes
        string say = countAndSay(n-1);
        //process
        string ans = "";
        for(int i=0; i<say.length(); i++){
            char ch = say[i];
            int count = 1;
            while(i<say.size()-1 && say[i] == say[i+1]){
                count++;
                i++;
            }
            ans += to_string(count);
            ans += string(1,ch);
        }
        return ans;
    }
};