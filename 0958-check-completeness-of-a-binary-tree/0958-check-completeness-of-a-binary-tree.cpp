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
    int countNode(TreeNode *root){
        if(root == NULL){
            return false;
        }
        
        int l = countNode(root->left);
        int r = countNode(root->right);
        
        return l+r+1;
     }
    bool CBT(TreeNode *root, int i, int count){
        if(root == NULL){
            return true;
        }
        
        if(i>count){
            return false;
        }
        
        return CBT(root->left, 2*i, count) && CBT(root->right, 2*i+1, count);
        
    }
    bool isCompleteTree(TreeNode* root) {
        int count = countNode(root);
        int i =1;
        bool ans = CBT(root, i, count);
        
        return ans;
    }
};