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
        if(root == NULL){
            return NULL;
        }
        int left  =  height(root->left);
        int right = height(root->right);
        
        return max(left , right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root ==NULL){
            return NULL;
        }
        
        int dleft = diameterOfBinaryTree(root->left);
        int dright = diameterOfBinaryTree(root->right);
        
        int h = height(root->left) + height(root->right);
        
        int ans = max(h,max(dleft,dright));
        
    
        
        return ans;

    }
};