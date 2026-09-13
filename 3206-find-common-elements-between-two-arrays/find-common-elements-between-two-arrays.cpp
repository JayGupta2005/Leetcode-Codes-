class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1;
        map<int,int> mp2;

        for(int val : nums1){
            mp1[val]++;
        }

        for(int val : nums2){
            mp2[val]++;
        }

        int first = 0;

        for(int i = 0; i < nums2.size(); i++){
            if(mp1.count(nums2[i])){
                first++;
            }
        }

        int second = 0;

        for(int i = 0; i < nums1.size(); i++){
            if(mp2.count(nums1[i])){
                second++;
            }
        }

        return {second, first};
    }
};