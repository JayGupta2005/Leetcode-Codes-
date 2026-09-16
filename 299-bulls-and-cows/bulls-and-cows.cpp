class Solution {
public:
    string getHint(string secret, string guess) {

        int aCount = 0;
        int bCount = 0;
        int n = secret.size();

        map<char,int> mp;

        for(int i = 0; i < n; i++) {
            if(secret[i] != guess[i]) {
                mp[guess[i]]++;
            }
        }

        for(int i = 0; i < n; i++) {

            if(secret[i] == guess[i]) {
                aCount++;
            }
            else {
                if(mp.count(secret[i]) && mp[secret[i]] > 0) {
                    bCount++;
                    mp[secret[i]]--;
                }
            }
        }

        return to_string(aCount) + 'A' + to_string(bCount) + 'B';
    }
};