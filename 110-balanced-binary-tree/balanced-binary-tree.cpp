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
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    if(left>right){
        return left+1;
    } 
    else{
        return right+1;
    }

}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool left_tree = isBalanced(root->left);
        bool right_tree = isBalanced(root->right);
        int left = height(root->left);
        int right = height(root->right);

        if((abs(left-right))<2 && left_tree==true && right_tree==true){
            return true;
        }

        return false;
    }
};