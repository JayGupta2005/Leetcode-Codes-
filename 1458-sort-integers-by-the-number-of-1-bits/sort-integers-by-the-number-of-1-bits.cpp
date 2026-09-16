class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> s;
        for(int i=0; i<arr.size(); i++){
            int num = arr[i];
            int count = 0;
            while(num > 0){
                int rem = num % 2;
                if(rem == 1){
                    count++;
                }
                num /= 2;
            }
            s.push_back(count);
        }
        vector<pair<int,int>> p;
        for(int i=0; i<arr.size(); i++){
            p.push_back({arr[i], s[i]});
        }
        
        sort(p.begin(), p.end(), [](auto &a , auto&b){
            if(a.second != b.second){
                return a.second < b.second;
            }
            return a.first < b.first;
        });
        // for(int i=0; i<s.size(); i++){
        //     cout<<s[i]<<" ";
        // }
        // return {};
        for(int i=0; i<p.size(); i++){
            s[i] = p[i].first;
        }
        return s;
    }
};