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
        if(!head)
        return head;

        int len=0;
        ListNode *temp=head,*prev=head;
        while(temp){
            temp=temp->next;
            len++;
        }
        if(len==n){
            head=head->next;
            return head;
        }
        temp=head->next;
        int k=len-n-1;
        while(temp->next and k){
            prev=prev->next;
            temp=temp->next;
            k--;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};