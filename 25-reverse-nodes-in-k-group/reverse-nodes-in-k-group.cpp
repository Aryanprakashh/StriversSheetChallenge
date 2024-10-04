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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }

        ListNode *prev=NULL;   
        ListNode *curr=head;   
        ListNode *nxt;
        int count=0;
        // Check if there are at least k nodes remaining
        ListNode *temp = head;
        for (int i = 0; i < k; ++i) {
            if (temp == nullptr) return head; // Not enough nodes to reverse
            temp = temp->next;
        }
        while(curr!=NULL and count<k){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            count++;
        }   
        if(nxt!=NULL)
        head->next=reverseKGroup(nxt,k);
        return prev;
    }
};