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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* node = head;

        while (node) {
            while (!st.empty() and st.top()->val < node->val) {
                st.pop();
            }
            st.push(node);
            node=node->next;
        }
        ListNode *nxt=NULL;
        while(!st.empty()){
            node=st.top();
            st.pop();
            node->next=nxt;
            nxt=node;
        }
        return node;
    }
};