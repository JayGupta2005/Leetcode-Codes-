class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> toStore;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                toStore.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0; i<toStore.size(); i++){
            nums.push_back(toStore[i]);
        }
        return toStore.size();
    }
};