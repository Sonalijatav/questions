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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result; // Change to 2D vector to store levels
        if (root == NULL) {
            return result;
        }

        queue<TreeNode*> q; // Fix: queue declaration
        q.push(root);
        
        bool LtoR = true; // Left to Right flag
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);
            
            for (int i = 0; i < size; i++) {
                TreeNode* frontnode = q.front(); // Fix: Use parentheses to call front()
                q.pop();
                
                int index = LtoR ? i : size - i - 1; // Correct index for zigzag
                ans[index] = frontnode->val; // Fix: Use frontnode instead of front

                // Push children into the queue
                if (frontnode->left) {
                    q.push(frontnode->left);
                }
                if (frontnode->right) {
                    q.push(frontnode->right);
                }
            }

            result.push_back(ans); // Add the current level to the result
            
            // Change direction
            LtoR = !LtoR;
        }
        
        return result; // Retur
    }
};