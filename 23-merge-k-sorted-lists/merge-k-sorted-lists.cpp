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
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:lists){
            ListNode *temp=i;
            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
                count++;
            }
        }
        if(pq.empty()) return NULL;
        ListNode *ans=new ListNode(0);
        ListNode *res=ans;

        while(!pq.empty()){
            ListNode *temp=new ListNode(pq.top());
            pq.pop();
            res->next=temp;
            res=res->next;
        }
    return ans->next;
    }
};