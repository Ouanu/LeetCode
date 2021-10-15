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
    int pre_idx = 0;

    unordered_map<int,int> idx_map;
public:
    TreeNode* helper(int left, int right, vector<int>& preorder, vector<int>& inorder){
        if(pre_idx == preorder.size() || left > right) return nullptr;
        int root_val = preorder[pre_idx];
        TreeNode *root = new TreeNode(root_val);
        int index = idx_map[root_val];


        pre_idx++;
        root->left = helper(left, index-1, preorder, inorder);
        root->right = helper(index + 1, right, preorder, inorder);
        
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int len = 0;
        for(auto val:inorder){
            idx_map[val] = len++;
        }
        return helper(0, inorder.size()-1, preorder, inorder);
    }
};