class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
     //   int ret = nums.size();
     //   for(int i = 0;i < nums.size();i++)
      //  {
       //     ret = ret ^ i ^ nums[i];
      //  }
        
        //return ret;
        
        map<int,int> nums_map;
        
        for(int i = 0; i < nums.size();i++)
        {
            nums_map[nums[i]] = 1;
        }
    
        for(int i = 0; i <= nums.size();i++)
        {
            if(nums_map[i] == 0)
            {
                return i;
            }
        }
     return 0;       
    }
    
};
