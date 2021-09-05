class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> myqueue;
        vector<vector<int>> return_list;
        TreeNode* pop_val;
        
        myqueue.push(root);
        
        if(root == nullptr)
            return return_list;
        
        while(!myqueue.empty())
        {
            int level_size = myqueue.size();
            vector<int> level_list;
            for(int i = 0; i < level_size; i++)
            {
                pop_val = myqueue.front();
                myqueue.pop();
                level_list.push_back(pop_val->val);
                if(pop_val->left != nullptr)
                {
                    myqueue.push(pop_val->left);
                }
                if(pop_val->right != nullptr)
                {
                    myqueue.push(pop_val->right);
                }
            
            }
            
            return_list.push_back(level_list);
            
        }

       return return_list;
    }
};
