class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> p;
        for(int i=0; i<mat.size(); i++){
            int count = 0;
            for(int j = 0; j<mat[0].size(); j++){
                if(mat[i][j] == 1){
                    count++;
                }else{
                    break;
                }
            }
            p.push_back({i, count});
        }
        sort(p.begin(), p.end(), [](auto &a, auto &b) {
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        vector<int> ans;
        for(int i=0; i<p.size(); i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        for(int i=0; i<k; i++){
            ans.push_back(p[i].first);
        }
        return ans;
    }
};