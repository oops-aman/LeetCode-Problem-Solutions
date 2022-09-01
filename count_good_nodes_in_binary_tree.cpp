/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    void traversal(TreeNode* root, int num) {
        if(!root) return;
        if(root -> val >= num) {
            count++;
            num = root -> val;
        }
        traversal(root -> left, num);
        traversal(root -> right, num);
    }
    int goodNodes(TreeNode* root) {
        traversal(root, INT_MIN);
        return count;
    }
};