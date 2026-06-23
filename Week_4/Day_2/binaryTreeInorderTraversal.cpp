//Using Recursion
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
    void traversal(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        traversal(root->left,ans);
        ans.push_back(root->val);
        traversal(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> ans;
      traversal(root,ans);
      return ans;
    }
};
//TC=O(N)
//SC=O(N)
//Using Morris Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* curr=root;

        while(curr!=nullptr){
            if(curr->left==nullptr){
                result.push_back(curr->val);
                curr=curr->right;
            }
            else {
                TreeNode* prev=curr->left;
                while(prev->right!=nullptr && prev->right!=curr) {
                    prev=prev->right;
                }
                if(prev->right==nullptr){
                    prev->right=curr;
                    curr=curr->left;
                }
                else{
                    prev->right=nullptr;
                    result.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return result;
    }
};
//TC=O(N)
//SC=O(1)