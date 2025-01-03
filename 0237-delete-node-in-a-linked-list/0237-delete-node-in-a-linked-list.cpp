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
    void deleteNode(ListNode* node) {
        // ListNode* temp = node;
        // while(temp!=NULL){
        //     cout<<temp->val<<endl;
        //     temp=temp->next;
        // }
        // cout<<node->val<<endl;
        node->val = node->next->val;
        node->next=node->next->next;
        return;
    }
};