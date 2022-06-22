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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp != 0) {
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        
        int n = arr.size();
        int low = 0, high = n - 1;
        int sum = 0, maxSum = 0;
        while(low < high) {
            sum = arr[low] + arr[high];
            maxSum = max(maxSum, sum);
            low++, high--;
        }
        
        return maxSum;
    }
};