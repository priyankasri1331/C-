class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int low = 0;
        int high = nums.size() - 1;
        int temp = 0;
        
        if(nums.size() < k)
            k = k % nums.size();
        
        while(low < high)
        {
            temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }
        
        low = k;
        high = nums.size() - 1;
        
        while(low < high)
        {
            temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
            
        } 
        
        low = 0;
        high = k - 1;        
        while(low < high)
        {
            temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
            
        }      
        
    }
};
