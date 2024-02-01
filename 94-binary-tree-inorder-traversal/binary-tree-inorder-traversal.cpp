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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*> output;
        if(root == NULL){
            return ans;
        } 

        while(root || !output.empty()){
            while(root){
                output.push(root);
                root=root->left;
            }
            root=output.top();
            ans.push_back(root->val);
            output.pop();
            root=root->right;
        }
        return ans;        
    }
};