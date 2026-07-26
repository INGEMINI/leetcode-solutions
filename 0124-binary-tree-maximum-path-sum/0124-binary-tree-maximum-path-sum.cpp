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
        int vall = INT_MIN;
        height(root,vall);
        return vall;
        
    }

    int height(TreeNode* node , int&vall){
        if(node == NULL) return 0;
        int l = max(0 , height(node->left,vall));
        int r = max(0 , height(node->right,vall));
        vall = max(vall , l+r+node->val);
        return node->val+max(l,r);
    }
};