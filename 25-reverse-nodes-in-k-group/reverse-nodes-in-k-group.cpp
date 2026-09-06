class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Store list in vector
        ListNode* temp = head;
        vector<int> store;
        while(temp) {
            store.push_back(temp->val);
            temp = temp->next;
        }
        int n = store.size();
        for(int st = 0; st+k <=n ; st += k){
            int left = st;
            int right = st+k-1;

            while(left<right){
                swap(store[left], store[right]);
                left++;
                right--;
            }
        }
        temp = head;
        for(int i=0; i<n; i++){
            temp->val = store[i];
            temp = temp->next;
        }
        return head;
    }
};