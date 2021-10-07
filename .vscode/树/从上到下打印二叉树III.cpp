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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        bool flag = false;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int> ansm;
            int length = q.size();
            for(int i=0; i<length; i++){
                TreeNode* node = q.front();
                q.pop();
                ansm.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            flag = !flag;
            if(!flag){
                ans.push_back(vector<int>(ansm.rbegin(), ansm.rend()));
            } else {
                ans.push_back(ansm);
            }
            
        }
        return ans;
    }
};