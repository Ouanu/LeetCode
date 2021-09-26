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
        vector<vector<int>> target;
        if(!root)
            return target;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            vector<int> tv;
            while(n--){
                TreeNode* tn = que.front();
                que.pop();
                tv.push_back(tn->val);
                if(tn->left)
                    que.push(tn->left);
                if(tn->right)
                    que.push(tn->right);
            }
            target.push_back(tv);
        }
        return target;
    }
};