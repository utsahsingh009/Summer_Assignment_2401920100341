//Brute Force
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
    int depth1(TreeNode* root){
        if(root==NULL) return 0;
        int sum1=INT_MIN;
        int sum2=INT_MIN;
        sum1=max(0,depth1(root->left));
        sum2=max(0,depth1(root->right));
        int maxi1=INT_MIN;
        maxi1=max(sum1,sum2);
        return root->val+maxi1;
    }
    int depth2(TreeNode* root){
        if(root==NULL) return 0;
        int sum1=INT_MIN;
        int sum2=INT_MIN;
        sum1=max(0,depth2(root->left));
        sum2=max(0,depth2(root->right));
        int maxi2=INT_MIN;
        maxi2=max(sum1,sum2);
        return root->val+maxi2;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return -1e9;
        int sum1=INT_MIN;
        int sum2=INT_MIN;
        sum1=max(0,depth1(root->left));
        sum2=max(0,depth2(root->right));
        int maxi=root->val+sum1+sum2;
        int sum3=maxPathSum(root->left);
        int sum4=maxPathSum(root->right);
        int maxi1=INT_MIN;
        maxi1=max(sum3,sum4);
        return max(maxi,maxi1);
    }
};
//TC=O(NXN)
//SC=O(H)
//Optimal Solution
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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
    int maxPathDown(TreeNode* node, int& maxi){
        if(node==NULL) return 0;
        int left=max(0,maxPathDown(node->left,maxi));
        int right=max(0,maxPathDown(node->right,maxi));
        maxi=max(maxi,node->val+left+right);
        return node->val+max(left,right);
    }
};
//TC=O(N)
//SC=O(H)