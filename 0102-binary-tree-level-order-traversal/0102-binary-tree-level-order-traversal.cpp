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
    vector<vector<int>> levelOrder(TreeNode* root) {
      queue<TreeNode*> q;
        vector<vector<int>> v;

        if (root == nullptr) return v; // Check if the root is null

        q.push(root); // Start with the root node
        
        while (!q.empty()) {
            vector<int> ans;
            int size = q.size(); // Get the number of nodes at the current level
            
            for (int i = 0; i < size; i++) { // Use 'size' instead of 'size()'
                TreeNode* temp = q.front();
                q.pop();
                
                ans.push_back(temp->val); // Add the current node's value to the ans
                
                // Add child nodes to the queue
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            
            v.push_back(ans); // Add the current level's values to the result
        }

        return v; // Return the 
    }
};