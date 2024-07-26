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
    int kthSmallest(TreeNode* root, int &k) {
        if(root==NULL){
            return -1;
        }
        
        int lAns = kthSmallest(root->left,k);
        if(lAns!=-1){
            return lAns;
        }
        
        k--;
        if(k==0){
            return root->val;
        }
        
        
        
        int rAns = kthSmallest(root->right,k);
        return rAns;
    }
};