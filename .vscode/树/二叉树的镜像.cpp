/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if(!root) return root;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* tree = root;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node == NULL) continue;
            swap(node->left, node->right);
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
        }
        return root;
    }
};