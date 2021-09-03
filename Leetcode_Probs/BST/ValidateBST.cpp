class Solution {
public:
    bool validate(TreeNode* node, long long low, long long high)
    {
        bool ret_val = true; 
            
        if(node == nullptr)
            return true;

        
        if((node->val > low && node->val < high))
        {
            //cout << node->val << " " << low << " " << high << endl;
            if(node->left != nullptr)
                ret_val = validate(node->left, low, node->val);
            if(ret_val == false)
            {
                return false;
            }
            if(node->right != nullptr)
                ret_val = validate(node->right, node->val, high);
            if(ret_val == false)
            {
                return false;
            }
        }
        else
        {
            //cout << node->val << " " << low << " " << high << endl;
            return false;
        }
        
        return true;
        
    }
    
    bool isValidBST(TreeNode* root) {
        
        if(root == nullptr)
            return true;
        
        if(root->left == nullptr && root->right == nullptr)
            return true;
        
        
        return validate(root, LLONG_MIN, LLONG_MAX);

    }
};
