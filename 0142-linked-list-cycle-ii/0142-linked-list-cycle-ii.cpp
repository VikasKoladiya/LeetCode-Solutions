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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,bool> m;
        ListNode* temp = head;
        while(temp!=NULL){
            if(!m[temp]){
                m[temp]=true;
                temp = temp->next;
            }
            else{
                return temp;
            }

        }
        // cout<<head->next;
        return NULL;
    }
};