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
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }

    bool validate(TreeNode* node, TreeNode *left, TreeNode *right){
        if (node == nullptr) { return true; }
        
        if ((left && node->val <= left->val)
            || (right && node->val >= right->val)) {
            return false;
        }

        return helper(node->left, left, node) 
                && helper(node->right, node, right);
    }
};
