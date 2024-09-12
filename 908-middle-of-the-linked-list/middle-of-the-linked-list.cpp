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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
            len++;
        }
        len=(len+1)/2;
        curr=head;
        while(len--){
            curr=curr->next;
        }
        return curr;
    }
};