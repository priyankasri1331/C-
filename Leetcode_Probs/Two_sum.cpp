class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        map<int, int> table;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            if(table.count(comp))
            {
                temp.insert(temp.end(), {i, table[comp]});
                return temp;
            }
            else
            {
            table.insert({nums[i],i});
            }
        }
        
        return temp;

    }
};
