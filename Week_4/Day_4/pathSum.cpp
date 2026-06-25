//Using BFS
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});
        while(!q.empty()){
            auto [curr_node, curr_sum]=q.front();
            q.pop();
            if(curr_node->left==nullptr && curr_node->right==nullptr){
                if(curr_sum==targetSum){
                    return true;
                }
            }
            if(curr_node->left != nullptr){
                q.push({curr_node->left, curr_sum + curr_node->left->val});
            }
            if(curr_node->right != nullptr){
                q.push({curr_node->right, curr_sum + curr_node->right->val});
            }
        }
        return false;
    }
};
//TC=O(N)
//SC=O(N)
//Using DFS(Optimal)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        if(root->left==nullptr&&root->right==nullptr){
            return targetSum==root->val;
        }
        int remSum=targetSum-root->val;
        return hasPathSum(root->left,remSum) || 
        hasPathSum(root->right,remSum);
    }
};
//TC=O(N)
//SC=O(H)