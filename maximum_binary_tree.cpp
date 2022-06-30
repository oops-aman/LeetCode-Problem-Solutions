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
    TreeNode* constructTree(vector<int>& nums, int i, int j) {
        if(i > j)
            return nullptr;
        const auto it = max_element(nums.begin() + i, nums.begin() + j + 1);
        int maxNum = *it;
        int index = it - nums.begin();
        
        TreeNode* root = new TreeNode(maxNum);
        root->left = constructTree(nums, i, index - 1);
        root->right = constructTree(nums, index + 1, j);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructTree(nums, 0, nums.size() - 1);
    }
};