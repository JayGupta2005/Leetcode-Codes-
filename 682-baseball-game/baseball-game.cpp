class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        for(int i=0; i<op.size(); i++){
            if(op[i] == "+"){
                int last = s.top();
                s.pop();
                int secLast = s.top();
                s.push(last);
                s.push(last + secLast);
            }else if(op[i] == "D"){
                int last = s.top();
                s.push(last*2);
            }else if(op[i] == "C"){
                s.pop();
            }else{
                int val = stoi(op[i]);
                s.push(val);
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};