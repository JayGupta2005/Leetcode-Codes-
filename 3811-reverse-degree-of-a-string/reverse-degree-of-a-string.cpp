class Solution {
public:
    int reverseDegree(string s) {
        int pro = 1;
        int count = 1;
        for(char ch : s){
            int idx = 'z' - ch + 1;
            int val = idx * count;
            pro += val;
            count++;
        }
        return pro-1;
    }
};