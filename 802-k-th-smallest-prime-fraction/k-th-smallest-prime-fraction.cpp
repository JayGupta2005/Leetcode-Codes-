class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<int,int>> v;
        int st = 0;
        int end = arr.size()-1;
        while(st < end){
            v.push_back({arr[st], arr[end]});
            st++;
            if(st > 0 && st == end){
                st = 0;
                end--;
            }
        }
        // now sort
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.first * b.second < b.first * a.second;
        });
        return {v[k-1].first, v[k-1].second};
    }
};