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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        if(!head) return NULL;
        ListNode *curr=head;
        while(curr!=NULL){
            curr=curr->next;
            len++;
        }
        curr=head;
        int k=len-n-1;
        if(n==len){
            head=head->next;
            return head;
        }
        else{
            curr=head;
            while(curr->next!=NULL and k){
                k--;
                curr=curr->next;
            }
            curr->next=curr->next->next;
        }
        return head;
    }
};