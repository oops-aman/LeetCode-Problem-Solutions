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
    ListNode* reverseList(ListNode* head) {
        if(head == 0 or head -> next == 0)
            return head;
        
        ListNode* t = head -> next;
        head -> next = NULL;
        
        ListNode* temp = reverseList(t);
        t -> next = head;
        
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = reverseList(l1);
        ListNode* t2 = reverseList(l2);
        int carry = 0;
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        
        while(t1 != NULL or t2 != NULL) {
            int x = (t1 != NULL) ? t1 -> val : 0;
            int y = (t2 != NULL) ? t2 -> val : 0;
            int sum = x + y + carry; 
            
            carry = sum / 10;
            curr -> next = new ListNode(sum % 10);
            curr = curr -> next;
            
            if(t1 != NULL) t1 = t1 -> next;
            if(t2 != NULL) t2 = t2 -> next;
        }
        if(carry > 0) {
            curr -> next = new ListNode(carry);
        }
        ListNode* res = reverseList(ans -> next);
        return res;
    }
};