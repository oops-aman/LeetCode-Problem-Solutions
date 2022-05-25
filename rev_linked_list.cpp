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
};