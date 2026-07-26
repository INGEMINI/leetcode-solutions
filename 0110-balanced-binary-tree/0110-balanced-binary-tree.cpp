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
    bool isBalanced(TreeNode* root) {
        return result(root) != -1 ; 
        
    }

    int result(TreeNode* node){
        if(node == NULL) return 0 ;
        int l = result(node->left);
        int r = result(node->right);
        if(l==-1 || r==-1) return -1;
        if(abs(l-r)>1) return -1;
        
        return 1+max(l,r);
    }
};