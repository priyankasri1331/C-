class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        for(unsigned int i = 1; i < nums.size(); i++)
            
            if (nums[i] == nums[i-1])
            {
                nums.erase(nums.begin() + i);
                i = i - 1;
                
            }
    return nums.size();

        
    }
};