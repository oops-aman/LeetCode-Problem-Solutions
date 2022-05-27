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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0 or !head) {
            return NULL;
        }
        ListNode* result = new ListNode(0);
        result -> next = head;
        head = result;
        
        ListNode* t1 = head;
        ListNode* t2 = head;
        
        for(int i = 0; i <= n; i++) {
            if(t2) {
                t2 = t2 -> next;
            } else {
                return NULL;
            }
        }
        
        while(t2) {
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        
        t1 -> next = t1 -> next -> next;
        
        return head -> next;
    }
};