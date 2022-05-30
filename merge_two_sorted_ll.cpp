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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1, *temp2 = list2;
        ListNode* result = 0;
        
        if(temp1 == 0)
            return temp2;
        
        else if(temp2 == 0)
            return temp1;
        
        else {
            if(temp1 -> val <= temp2 -> val) {
                result = temp1;
                result -> next = mergeTwoLists(temp1 -> next, temp2);
            } else {
                result = temp2;
                result -> next = mergeTwoLists(temp1, temp2 -> next);
            }
        }
        return result;
    }
};