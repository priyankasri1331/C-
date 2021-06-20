class Solution {
public:
    vector<int> ret_array;
    vector<int> postorderTraversal(TreeNode* root) 
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
        traversal(node->right);
        ret_array.push_back(node->val);

        
    }
};
