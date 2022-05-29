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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        
        while(fast != 0 and fast -> next != 0 and slow != 0) {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
                return true;
        }
        return false;
    }
};