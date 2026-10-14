class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if(n < 2){
            return {-1};
        }
        for(int i = 0; i<arr.size()-1; i++){
            int maxi = -1;
            for(int j = i+1;j<arr.size(); j++){
                maxi = max(arr[j], maxi);
            }
            arr[i] = maxi;
        }
        arr[n-1] = -1;
        return arr;
    }
};