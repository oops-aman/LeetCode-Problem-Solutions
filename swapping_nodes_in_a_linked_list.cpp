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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp -> next;
        }

        int pos = count - k + 1;
        ListNode* node1 = head, *node2 = head;
        int i = 1;
        while(i < k) {
            node1 = node1 -> next;
            i++;
        }

        int j = 1;
        while(j < pos) {
            node2 = node2 -> next;
            j++;
        }
        swap(node1 -> val, node2 -> val);
        return head;
    }
};