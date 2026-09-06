class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        vector<int> st;
        ListNode* temp = head;
        // Store linked list values
        while(temp) {
            st.push_back(temp->val);
            temp = temp->next;
        }
        int n = st.size();
        int k = 1;
        int start = 0;
        while(start < n) {
            // Actual length of current group
            int len = min(k, n - start);

            // If group length is even, reverse it
            if(len % 2 == 0) {
                int left = start;
                int right = start + len - 1;

                while(left < right) {
                    swap(st[left], st[right]);
                    left++;
                    right--;
                }
            }

            start += len;
            k++;
        }
        // Put values back into linked list
        temp = head;
        for(int i = 0; i < n; i++) {
            temp->val = st[i];
            temp = temp->next;
        }
        return head;
    }
};