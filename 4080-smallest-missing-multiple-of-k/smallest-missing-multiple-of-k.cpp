class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for(int num : nums){
            s.insert(num);
        }
        int multiple = k;
        for(auto it : s){
            if(s.count(multiple)){
                multiple += k;
            }
        }
        return multiple;
    }
};