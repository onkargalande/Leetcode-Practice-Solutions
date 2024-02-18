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
int smallest(TreeNode* root){
    if(root==NULL){
        return NULL;
    }

    while(root->left){
        root=root->left;
    }
    return root->val;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val>key){
            root->left = deleteNode(root->left, key); 
        }
        else if(root->val<key){
            root->right = deleteNode(root->right, key);
        }
        else if(root->val == key){
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->left!=NULL && root->right==NULL){
                return root->left;
            }
            else if(root->left==NULL && root->right!=NULL){
                return root->right;
            }
            else{
                int replace = smallest(root->right);
                root->val = replace;
                root->right = deleteNode(root->right, replace);
            }
        }
        return root;        
    }
};