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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) {
                return res;
        }
        queue<TreeNode*> q;

        q.push(root);
        res.push_back({root->val});
        int count = 1,count2 = 0;
        vector<int> floor = {};
        while (!q.empty()) {
                TreeNode* node = q.front();
                
                if (node->left) {
                        q.push(node->left);
                        floor.push_back(node->left->val);
                        count2++;
                }
                if (node->right) {
                        q.push(node->right);
                        floor.push_back(node->right->val);
                        count2++;
                }
                count--;
                if (count == 0){
                    if (!floor.empty())
                        res.push_back(floor);
                    count = count2;
                    count2 = 0;
                    floor = {};
                }
                
                q.pop();
        }
        return res;
    }
};