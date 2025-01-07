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
    bool isPalindrome(ListNode* head) {
    //     vector<int> v;
    //     while(head!=NULL){
    //         v.push_back(head->val);
    //         head = head->next;
    //     }
    //     int left = 0,right = v.size()-1;
    //     while(left<=right){
    //         if(v[left]!=v[right]){
    //             return false;
    //         }
    //         left++;
    //         right--;
    //     }
    //     return true;
    // }

        stack<int> st;
        ListNode* temp = head;
        while(head!=NULL){
            st.push(head->val);
            head = head->next;
        }
        while(!st.empty()){
            if(st.top()!=temp->val){
                return false;
            }
            st.pop();
            temp = temp -> next;
        }
        return true;
    }
};