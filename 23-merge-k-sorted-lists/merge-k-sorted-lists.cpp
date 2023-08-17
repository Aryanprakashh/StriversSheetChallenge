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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int count=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:lists){
            ListNode *temp=it;
            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
                count++;
            }
        }
        if(pq.empty()) return NULL;
        ListNode *res=new ListNode(0);
        ListNode *temp=res;

        while(count--){
            ListNode *q=new ListNode(pq.top());
            temp->next=q;
            pq.pop();
            temp=temp->next;
        }
    return res->next;
    }
};