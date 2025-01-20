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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode;
        head = NULL;
        ListNode* temp = new ListNode;
        int carry = 0;
        while(l1!=NULL || l2!=NULL){
            int sum = 0;
            if(l1){
                sum += l1->val;
            }
            if(l2){
                sum += l2->val;
            }
            if(carry == 1){
                sum++;
            }
            ListNode* newnode = new ListNode;
            newnode->next = NULL;
            if(sum > 9){
                carry = 1;
            }
            else{
                carry = 0;
            }
            newnode->val = sum%10;
            if(head == NULL){
                head = temp = newnode;
            }
            else{
                temp->next = newnode;
                temp = newnode;
            }
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        if(carry==1){
            ListNode *newnode = new ListNode(1);
            newnode->next = NULL;
            temp->next = newnode;
        }
        return head;
    }
};