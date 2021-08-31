class Solution {
public:
    
    TreeNode* searchBST(TreeNode* root, int val) {
        
        TreeNode* p;
        if(root == nullptr || val == root->val)
            return root;
        
        if(val < root->val)
            p = searchBST(root->left, val);
        else
            p = searchBST(root->right, val);
        
        return p;
    }
};
