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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertAtoB(nums, 0, nums.size());
    }

    TreeNode* convertAtoB(vector<int>& nums, int start, int end) {
        if (end <= start) return nullptr;
        int mid = (start+end)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = convertAtoB(nums, start, mid);
        root->right = convertAtoB(nums, mid+1, end);

        return root;
    }
};
