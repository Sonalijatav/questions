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
    void pre(TreeNode *root, vector<int>&a){
         if(root==NULL){
            return;
        }
        
        
        a.push_back(root->val);
        pre(root->left,a);
        pre(root->right,a);
        
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>a;

        pre(root,a);

        return a;

    }
};