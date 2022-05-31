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
        if(head == 0)
            return true;
        
        ListNode *t = head;
        ListNode *rev = new ListNode(head -> val);
        
        while(t -> next != 0) {
            ListNode *temp = new ListNode(t -> next -> val);
            temp -> next = rev;
            rev = temp;
            t = t -> next;
        }
        
        ListNode *t1 = head;
        ListNode *t2 = rev;
        
        while(t1 != 0) {
            if(t1 -> val != t2 -> val)
                return false;
            
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        return true;
    }
};