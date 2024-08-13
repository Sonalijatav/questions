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
    
    bool sy(TreeNode *root1, TreeNode *root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
         if(root1 == NULL || root2 == NULL){
            return false;
        }
        
        
        if(root1->val != root2->val){
           return false; 
        }
        
         bool l = sy(root1->left,root2->right);
         bool r = sy(root1->right, root2->left);

         if(l == true &&r == true){
            return true;
         }  
         else
         return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        TreeNode *leftRoot = root->left;
        TreeNode *rightRoot = root->right;
        
        bool ans = sy(leftRoot,rightRoot);
        
       
        return ans;
    }
};