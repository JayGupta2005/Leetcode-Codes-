class Solution {
public:
    int maximum69Number (int num) {
        vector<int> toStore;
        while(num > 0){
            int last = num % 10;
            toStore.push_back(last);
            num = num/10;
        }
        reverse(toStore.begin(), toStore.end());
        for(int i=0; i<toStore.size(); i++){
            if(toStore[i] == 6){
                toStore[i] = 9;
                break;
            }
        }
        // cout<<num<<" ";
        for(int i=0; i<toStore.size(); i++){
            num = num * 10 + toStore[i];
        }

        return num;
    }
};