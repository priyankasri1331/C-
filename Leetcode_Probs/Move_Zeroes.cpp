class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int count = 0;
        for(unsigned int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count += 1;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for ( unsigned int j = 0; j < count; j++)
        {
            nums.push_back(0);
        }
        
    }
};
