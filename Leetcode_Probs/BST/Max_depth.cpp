class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        
        if(root == nullptr)
            return 0;
        
        int depth_left = maxDepth(root->left);
        
        int depth_right = maxDepth(root->right);
        
        return max(depth_left, depth_right) + 1;
    }
};
