class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st; //stack bnaya
        string curr = "";
        for(char ch : s) {
            //agar ( hai
            if(ch == '(') {
                st.push(curr);
                curr = "";
            }
            //nhi to yha  tk reverse
            else if(ch == ')') {
                reverse(curr.begin(), curr.end());
                curr = st.top() + curr;
                st.pop();
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
};