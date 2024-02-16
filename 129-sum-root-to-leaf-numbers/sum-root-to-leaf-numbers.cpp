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
void sumOfNum(TreeNode* root, int num, int &ans){
    if(root==NULL){
        return;
    }
    num = num*10+root->val;
    if(root->left==NULL && root->right==NULL){
        ans+=num;
    }
    else{
        sumOfNum(root->left, num, ans);
        sumOfNum(root->right, num, ans);
    }
    return;
}
    int sumNumbers(TreeNode* root) {
        int ans=0;
        sumOfNum(root, 0, ans);
        return ans;        
    }
};