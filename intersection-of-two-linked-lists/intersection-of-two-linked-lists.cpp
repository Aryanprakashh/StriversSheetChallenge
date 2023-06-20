/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //brute force solution
    //     while(headA!=NULL){
    //         ListNode *temp=headB;
    //         while(temp!=NULL){
    //             if(headA==temp)
    //                 return headA;
    //         temp=temp->next;
    //         }
    //     headA=headA->next;
    //     }
    // return NULL;

    //approach 2
    // using hashmap
        unordered_map<ListNode *,int> m;
        while(headA!=NULL){
            m[headA]++;
            headA=headA->next;
        }

        while(headB!=NULL){
            if(m[headB]>0){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};