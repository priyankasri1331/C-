
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL)
            return 0;
        else
        {
        int ltree = maxDepth(root->left);
        int rtree = maxDepth(root->right);
        
        if(ltree > rtree)
        {
            return ltree + 1;
        }
        else
            return rtree + 1;
        }
        
    }
};
