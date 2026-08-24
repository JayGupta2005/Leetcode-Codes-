// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1 ;
        int last = n;
        while(low<last){
            int mid = low+(last-low)/2;
            if(isBadVersion(mid)){
                last = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};