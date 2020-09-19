class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {
        
        int shift_num = 31;
        uint32_t ret = 0;
        
        while(n != 0)
        {
            ret = ret + ((n & 1) << shift_num);
            n = n >> 1;
            shift_num -= 1;
        }
        
        return ret;
        
    }
};
