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
    int getSize(ListNode* temp) {
        int count = 0;
        while(temp) {
            count++;
            temp = temp -> next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int n = getSize(head);
        ListNode* temp = head;
        int dig = 0;
        int num = 0;
        while(temp) {
            dig = temp -> val;
            n--;
            dig *= pow(2, n);
            num += dig;
            temp = temp -> next;
        }
        return num;
    }
};