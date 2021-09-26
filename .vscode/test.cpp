#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isValidBST(TreeNode *root);

int main()
{
    TreeNode *left = new TreeNode();
    TreeNode *right = new TreeNode(1);
    TreeNode *tree = new TreeNode(1, left, right);
    bool checked = isValidBST(tree);
    cout << checked << endl;

    return 0;
}

bool isValidBST(TreeNode *root)
{
    if (root->left == nullptr && root->right == nullptr)
    {
        return true;
    }
    else
    {
        if(root->left != nullptr){
            int val = root->left->val;
            if(val > root->val){
                return false;
            }
        } else if(root->right != nullptr){
            int val = root->right->val;
            if(val < root->val){
                return false;
            }
        }
        return true;
    }

    bool checkLeft = isValidBST(root->left);
    bool checkRight = isValidBST(root->right);
    cout << "checkedLeft" << checkLeft << endl;
    cout << "checkedRight" << checkRight << endl;
    if (checkLeft && checkRight)
    {
        return true;
    }
    else
    {
        return false;
    }
}