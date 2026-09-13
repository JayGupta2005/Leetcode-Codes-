class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int> st;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                    st.push_back(mat[i][j]);
            }
        }
        sort(st.begin(), st.end());
        return st[k-1];
    }
};