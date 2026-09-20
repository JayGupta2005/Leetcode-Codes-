class Solution {
public:
    int reverseDegree(string s) {
        vector<int> ans;
        int pro = 1;
        int count = 1;
        for(char ch : s){
            int idx = 'z' - ch + 1;
            ans.push_back(idx);
            int val = idx * count;
            pro += val;
            count++;
        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        return pro-1;
    }
};