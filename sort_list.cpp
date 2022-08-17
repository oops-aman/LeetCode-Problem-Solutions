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
    ListNode* sortList(ListNode* head) {
        vector<int> data;
        ListNode* temp = head;
        while(temp != NULL) {
            data.push_back(temp -> val);
            temp = temp -> next;
        }
        
        sort(data.begin(), data.end());
        ListNode* sortList = new ListNode(0);
        ListNode* curr = sortList;
        for(int i = 0; i < data.size(); ++i) {
            curr -> next = new ListNode(data[i]);
            curr = curr -> next;
        }
        return sortList -> next;
    }
};