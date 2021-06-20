class Solution {
public:
    vector<int> ret_array;
    vector<int> inorderTraversal(TreeNode* root) 
    {
    
        TreeNode* curr_node = root;
           
        traversal(root);
       
        return ret_array;
    }
    
    void traversal(TreeNode* node)
    {
        if(node == nullptr)
        {
            return;
        }
        traversal(node->left);
        
        ret_array.push_back(node->val);
        
        traversal(node->right);

    }
        
};
