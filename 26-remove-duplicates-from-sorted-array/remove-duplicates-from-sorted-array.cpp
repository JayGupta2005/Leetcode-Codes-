class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        // for(auto it : s){
        //     cout<<it<<" ";
        // }
        int sz = s.size();
        cout<<s.size();
        nums.clear();
        for(auto it : s){
            nums.push_back(it);
        }
        return sz;
    }
};