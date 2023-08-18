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
void helper(ListNode *root,vector<int> &v){
    while(root){
        v.push_back(root->val);
        root=root->next;
    }
}
void makelist(ListNode* root,vector<int> &v){
    int i=0;
    while(root){
        root->val=v[i];
        i++;
        root=root->next;
    } 
}
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        helper(head,v);
        sort(v.begin(),v.end());
        makelist(head,v);
        return head;
    }
};