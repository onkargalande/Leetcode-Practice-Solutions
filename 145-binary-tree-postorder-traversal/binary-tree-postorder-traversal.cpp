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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> output;
        TreeNode* lastVisited = NULL;

        if(root==NULL)
            return ans;

        while(root!=NULL || !output.empty()){
            if(root!=NULL){
                output.push(root);
                root = root->left;
            }
            else{
                TreeNode* current = output.top();
                if(current->right!=NULL && lastVisited!=current->right){
                    root=current->right;
                }                    
                else{
                    ans.push_back(current->val);
                    lastVisited = current;
                    output.pop();
                }
            }
        }

        return ans;
        
    }
};