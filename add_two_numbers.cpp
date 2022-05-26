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
        ListNode* result = new ListNode(0);
        ListNode* temp1 = l1, *temp2 = l2,*curr = result;
        int carry = 0;
        while(temp1 != NULL or temp2 != NULL) {
            int x = (temp1 != NULL) ? temp1 -> val : 0;
            int y = (temp2 != NULL) ? temp2 -> val : 0;
            int sum = carry + x + y;    
            
            carry = sum / 10;
            curr -> next = new ListNode(sum % 10);
            curr = curr -> next;
            
            if(temp1 != NULL) temp1 = temp1 -> next;
            if(temp2 != NULL) temp2 = temp2 -> next;
        }
        if(carry > 0) {
            curr -> next = new ListNode(carry);
        }
        return result -> next;
    }
};