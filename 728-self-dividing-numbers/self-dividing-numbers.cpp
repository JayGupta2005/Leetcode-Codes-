class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            bool isSelf = true;
            int digit = i;
            while(digit>0){
                int last = digit%10;
                if(last == 0){
                    isSelf = false;
                    break;
                }
                if(i % last != 0){
                    isSelf = false;
                    break;
                }
                digit = digit/10;
            }
            if(isSelf){
                ans.push_back(i);
            }
        }
        return ans;
    }
};