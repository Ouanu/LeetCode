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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrderResult;
        postOrder(postOrderResult, root);
        return postOrderResult;
    }

    void postOrder(vector<int> &postOrderResult, TreeNode* root){
        if(!root) 
            return;
        postOrder(postOrderResult, root->left);  
        postOrder(postOrderResult, root->right);
        postOrderResult.push_back(root->val);  
    }
};