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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        return preOrder(result, root);
    }
    vector<int> preOrder(vector<int> result, TreeNode* root){
        if(!root) return result;
        result.push_back(root->val);
        result = preOrder(result, root->left);
        result = preOrder(result, root->right);
        return result;
    }
};