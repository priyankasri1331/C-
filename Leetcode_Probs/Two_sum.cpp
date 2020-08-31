class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> umap;
        vector<int> out;
        umap[nums[0]] = 0;
        
        for (unsigned int i = 1; i < nums.size(); i++)
        {
            auto it = umap.find(target - nums[i]);   
            if (it != umap.end())
            {
                out.push_back(it->second);
                out.push_back(i);
                return out;
            }
            umap[nums[i]] = i;  
        }
    return out;
    }
};
