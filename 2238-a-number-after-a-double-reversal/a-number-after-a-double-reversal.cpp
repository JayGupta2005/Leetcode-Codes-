class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n = num;
        int number = 0;
        while(n>0){
            int last = n%10;
            number = number*10 + last;
            n = n/10 ;
        }
        int N = number;
        int numb = 0;
        while(N>0){
            int last = N%10;
            numb = numb*10 + last;
            N = N/10 ;
        }
        return (num == numb);
    }
};