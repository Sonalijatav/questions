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
    
    int Max(TreeNode *root){
        TreeNode *temp = root;
        if(root == NULL){
            return -1;
        }
        while(temp->right!=NULL){
            temp = temp->right;
        }
        return temp->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){return NULL;}
        
         if(root->val == key){
            if(root->left ==NULL  && root->right == NULL){
                delete root;
                return NULL;
            }
        else if(root->left ==NULL  && root->right != NULL){
                TreeNode *child = root->right;
                delete root;
                return child;
            }
           else if(root->left !=NULL  && root->right == NULL){
                TreeNode *child = root->left;
                delete root;
                return child;
            }
             
            else if(root->left !=NULL  && root->right != NULL){
                
                int pre = Max(root->left);
                
                root->val = pre;
                root->left = deleteNode(root->left, pre);
                return root;
            }
            
         }
        
        
       
          else if(key < root->val){
                 root->left = deleteNode(root->left,key);
                
            }
        
      
           else if(key > root->val){
                   root->right = deleteNode(root->right,key);   
            }
        


    
            return root;

    }
};