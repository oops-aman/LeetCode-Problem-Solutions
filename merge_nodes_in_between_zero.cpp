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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* res = new ListNode(0);
        ListNode* curr = res;
        
        temp = temp -> next;
        while(temp) {
            int sum = 0;
            while(temp -> val != 0) {
                sum += temp -> val;
                temp = temp -> next;
            }
            
            curr -> next = new ListNode(sum);
            curr = curr -> next;
            temp = temp -> next;
        }
        return res -> next;
    }
};