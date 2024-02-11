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
void swapSubtree(TreeNode* root){
    if(root==NULL){
        return;
    }
    invertTree(root->left);
    invertTree(root->right);

    TreeNode* Temp = root->left;
    root->left = root->right;
    root->right = Temp;
}
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        swapSubtree(root);        
        return root;
    }
};