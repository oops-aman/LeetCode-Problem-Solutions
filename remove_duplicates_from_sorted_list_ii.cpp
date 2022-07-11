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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = new ListNode(1);
        ListNode* curr = res;
        
        if(head == NULL or head -> next == NULL) return head;
        
        while(head != NULL) {
            ListNode* temp = head;
            head = head -> next;
            while(head and head -> val == temp -> val) head = head -> next;
            if(temp -> next == head) {
                temp -> next = NULL;
                curr -> next = temp;
                curr = curr -> next;
            }
        }
        return res -> next;
    }
};