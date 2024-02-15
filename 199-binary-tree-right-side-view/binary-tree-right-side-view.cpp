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
void traverse(TreeNode* root, int depth, vector<int>& result){
    if(root==NULL){
            return;
        }        
        if(depth>=result.size()){
            result.push_back(root->val);
        }

        traverse(root->right, depth+1, result);
        traverse(root->left, depth+1, result);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root==NULL){
            return result;
        }
        traverse(root, 0, result);
        return result;        
    }
};