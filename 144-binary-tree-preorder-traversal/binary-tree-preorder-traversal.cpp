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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> output;

        if(root==NULL){
            return ans;
        }

        output.push(root);
        while(!output.empty()){
            TreeNode* current = output.top();
            output.pop();
            ans.push_back(current->val);

            if(current->right){
                output.push(current->right);
            }
            if(current->left){
                output.push(current->left);
            }
            
        }

        return ans;

    }
};