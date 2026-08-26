class Solution {
    int fibu(int n, vector<int>& f){
        if(n<=1){
            return n;
        }
        if(f[n] != -1){
            return f[n];
        }
        return f[n] = fibu(n-1, f) + fibu(n-2, f);
    }
public:
    int fib(int n) {
        vector<int> f(n+1, -1);
        return fibu(n,f);   
    }
};