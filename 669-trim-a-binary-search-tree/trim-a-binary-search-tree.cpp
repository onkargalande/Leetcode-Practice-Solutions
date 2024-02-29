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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return NULL;
        }
        TreeNode* leftSubtree = trimBST(root->left , low , high);
        TreeNode* rightSubtree = trimBST(root->right , low , high);   

        if(root->val < low){
            return rightSubtree;
        }
        else if(root->val > high){
            return leftSubtree;
        }
        else{
            root->left=leftSubtree;
            root->right=rightSubtree;
            return root;
        }        
    }
};