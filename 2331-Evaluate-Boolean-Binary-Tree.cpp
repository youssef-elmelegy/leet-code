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
    bool evaluateTree(TreeNode* root) {
        

        if (root->right){
            root->right->val = evaluateTree(root->right);
        }
        if (root->left){
            root->left->val = evaluateTree(root->left);
        }

        if (root->val == 0) return false;
        else if (root->val == 1) return true;
        else if (root->val == 2) return root->right->val || root->left->val;
        else if (root->val == 3) return root->right->val && root->left->val;

        return root;
    }
};