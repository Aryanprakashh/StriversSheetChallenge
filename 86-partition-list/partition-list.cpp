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
        ListNode *lesstemp=new ListNode(0);
        ListNode *less=lesstemp;
        ListNode *greatertemp=new ListNode(0);
        ListNode *greater=greatertemp;
        ListNode *temp=head;

        while(temp!=NULL){
            if(temp->val<x){
                less->next=temp;
                less=less->next;
            }
            else{
                greater->next=temp;
                greater=greater->next;
            }
            temp=temp->next;
        }
        // ListNode
        less->next=greatertemp->next;
        greater->next=NULL;
        return lesstemp->next;

    }
};