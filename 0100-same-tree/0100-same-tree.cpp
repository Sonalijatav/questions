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
    bool inorder(TreeNode *p, TreeNode *q){
        bool ans ;
        if(p==NULL && q== NULL){
            return true;
        }
         if(p!=NULL && q== NULL){
            return false;
        }
         if(p==NULL && q != NULL){
            return false;
        }
        
         ans = (p->val == q->val);

        bool l = inorder(p->left, q->left);
        bool r = inorder(p->right,q->right);
        

        if( l && r && ans){
            return true;
        }
        else
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return inorder(p,q);
    }
};