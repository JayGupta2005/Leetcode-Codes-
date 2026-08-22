class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n == 0){
            return true;
        }
        if(f.size()<2 && f[0]==0 && n<=1){
            return true;
        }
        // if(f.size() == 2 && f[0]== 1 || f[1] == 1 && n<1){
        //     return true;
        // }else if(f.size() == 2 && f[0]== 1 || f[1] == 1 && n==1){
        //     return false;
        // }
        for(int i=0; i<f.size(); i++){
            if(i == 0){
                if(f[i] == 0 && f[i+1] == 0){
                    f[i] = 1;
                    n--;
                    if(n == 0){
                        return true;
                    }
                }
            }else if(i == f.size()-1){
                if(f[i] == 0 && f[i-1] == 0){
                    f[i] = 1;
                    n--;
                    if(n == 0){
                        return true;
                    }
                }
            }else{
                if(f[i] == 0 && f[i-1] == 0 && f[i+1] == 0){
                    f[i] = 1;
                    n--;
                    if(n == 0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};