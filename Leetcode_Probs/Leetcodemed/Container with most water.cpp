class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ptr1 = 0;
        int ptr2 = height.size() - 1;
        
        
        int hmin, hmax, ptrmin, ptrmax;
        
        if(height[ptr1] < height[ptr2])
        {
            hmin = height[ptr1];
            ptrmin = ptr1;
            hmax = height[ptr2];
            ptrmax = ptr2;
        }
        else
        {
            hmin = height[ptr2];
            ptrmin = ptr2;
            hmax = height[ptr1];
            ptrmax = ptr1;
            
        }
        
        int max_area = hmin * (ptr2 - ptr1);
        
        while(ptr2 > ptr1)
        {
           if(ptrmin == ptr1)
           {
               ptr1++;
                if(height[ptr1] < height[ptr2])
                {
                    hmin = height[ptr1];
                    ptrmin = ptr1;
                    hmax = height[ptr2];
                    ptrmax = ptr2;
                }
                else
                {
                    hmin = height[ptr2];
                    ptrmin = ptr2;
                    hmax = height[ptr1];
                    ptrmax = ptr1;

                }               
           }
            else
            {
                ptr2--;
                if(height[ptr1] < height[ptr2])
                {
                    hmin = height[ptr1];
                    ptrmin = ptr1;
                    hmax = height[ptr2];
                    ptrmax = ptr2;
                }
                else
                {
                    hmin = height[ptr2];
                    ptrmin = ptr2;
                    hmax = height[ptr1];
                    ptrmax = ptr1;

                }
            }
            
            if(max_area < (hmin * (ptr2 - ptr1)))
            {
                cout << max_area << " " << hmin * (ptr2 - ptr1);
                max_area = hmin * (ptr2 - ptr1);
            }

        }
        
        return max_area;
        
    }
};
