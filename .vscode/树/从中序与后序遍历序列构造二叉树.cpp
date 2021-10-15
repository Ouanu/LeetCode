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
    int post_idx;
    unordered_map<int,int> idx_map;
public:

    TreeNode* helper(int left, int right, vector<int>& inorder, vector<int>& postorder){
        //此时没有节点了
        if(left > right) return nullptr;
        //获取节点数值
        int root_val = postorder[post_idx];
        //构造节点
        TreeNode* root = new TreeNode(root_val);
        //获得该节点所在中序遍历中的位置
        int index = idx_map[root_val];

        //完成一个节点的构造，总数减一
        post_idx--;
        // 构建右子树
        root->right = helper(index + 1, right, inorder, postorder);
        // 构建左子树
        root->left = helper(left, index - 1, inorder, postorder);

        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // 从后序遍历出发，最后一个为根节点
        post_idx = postorder.size() - 1;
        

        int idx = 0;
        for(auto val : inorder){
            idx_map[val] = idx++;
        }
        return helper(0, inorder.size()-1, inorder, postorder);
    }
};