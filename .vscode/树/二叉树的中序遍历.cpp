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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrderResult;
        inOrder(inOrderResult, root);
        return inOrderResult;
    }

    void inOrder(vector<int> &inOrderResult, TreeNode* root){
        if(!root) 
            return;
        inOrder(inOrderResult, root->left);
        inOrderResult.push_back(root->val);
        inOrder(inOrderResult, root->right);
            
    }
};