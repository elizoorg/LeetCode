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
    void sumOfLeftLeavess(int &sum,TreeNode*root){
         if(root==NULL) return;
    
    if(root->left!=NULL and root->left->left==NULL and root->left->right==NULL)
        sum+=root->left->val ;
    
     sumOfLeftLeavess(sum,root->left);
     sumOfLeftLeavess(sum,root->right);
        
        
    }
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        sumOfLeftLeavess(sum,root);
        return sum;
    }
};