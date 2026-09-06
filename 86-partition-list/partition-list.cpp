/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int> small;
        vector<int> large;

        while(temp != NULL){
            if(temp -> val >= x){
                large.push_back(temp->val);
            }else{
                small.push_back(temp->val);
            }
            temp = temp->next;
        }
        for(int v : large){
            small.push_back(v);
        }
        temp = head;
        for(int i=0; i<small.size(); i++){
            temp->val = small[i];
            temp = temp->next;
        }
        return head;
    }
};