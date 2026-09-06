class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        if(n < 2){
            return 0;
        }
        vector<int> s(n,-1);
        for(int i=0; i<n; i++){
            s[i] = points[i][0];
        }
        sort(s.begin(), s.end());
        int maxi = INT_MIN;
        for(int i=1; i<n; i++){
            int val = s[i]-s[i-1];
            maxi = max(maxi, val);
        }
        return maxi;
    }
};