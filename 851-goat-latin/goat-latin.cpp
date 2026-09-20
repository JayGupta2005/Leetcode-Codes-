class Solution {
public:
    string toGoatLatin(string s) {
        vector<string> v;
        string word = "";
        // Split sentence into words
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                v.push_back(word);
                word = "";
            }
        }
        v.push_back(word);
        string finalAns = "";
        string toAdd = "a";
        for (int i = 0; i < v.size(); i++) {
            string word = v[i];

            if (word[0] == 'a' || word[0] == 'e' ||
                word[0] == 'i' || word[0] == 'o' ||
                word[0] == 'u' || word[0] == 'A' ||
                word[0] == 'E' || word[0] == 'I' ||
                word[0] == 'O' || word[0] == 'U') {
                finalAns += word + "ma" + toAdd;
            } else {
                finalAns += word.substr(1) + word[0] + "ma" + toAdd;
            }
            if (i != v.size() - 1)
                finalAns += " ";

            toAdd += 'a';
        }
        return finalAns;
    }
};