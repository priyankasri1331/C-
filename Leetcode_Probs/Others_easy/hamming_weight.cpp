class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        uint32_t mask = 0x01;
        int count = 0;
        
        for(int i = 0; i < 32;i++)
        {
            cout << mask << " " << count << endl;
            if((mask & n) != 0)
            {
                count++;
            }
            mask = mask << 1;
        }
    return count;
        
    }
};
