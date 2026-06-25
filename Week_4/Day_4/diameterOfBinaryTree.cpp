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
    int findMax(TreeNode* node, int& diameter){
        if(!node){
            return 0;
        }
        int lh=findMax(node->left,diameter);
        int rh=findMax(node->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int diameter=0;
       findMax(root,diameter);
       return diameter;
    }
};
//TC=O(N)
//SC=O(H)