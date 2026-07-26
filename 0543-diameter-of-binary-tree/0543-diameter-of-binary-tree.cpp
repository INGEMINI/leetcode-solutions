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
    int diameterOfBinaryTree(TreeNode* root) {
        int dia= 0 ;
        height(root, dia);
        return dia;
        
    }

    int height(TreeNode* node, int& dia){
        if(node == NULL) return 0;
        int l = height(node->left,dia);
        int r = height(node->right,dia);
        dia = max(dia, l+r);
        return 1+max(l,r);

    }
};