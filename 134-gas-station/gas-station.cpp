class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int idx= 0;
        int tank = 0;
        int total= 0;

        for(int i = 0; i < n; i++) {
            int diff = gas[i] - cost[i];

            tank = tank+diff;
            total = total+diff;
            if(tank < 0) {
                idx = i + 1;
                tank = 0;
            }
        }
        if(total < 0){
            return -1;
        }
        return idx;
    }
};