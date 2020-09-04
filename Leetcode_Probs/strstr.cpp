class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if((needle == "") || (haystack == needle))
            return 0;
    
        for(int i = 0; i <= ((int)haystack.size() - (int)needle.size()); i++)
        {
            cout << i << " " << (int)haystack.size() - (int)needle.size() << "\n";
            if (haystack[i] == needle[0])
            {
                int hay_ind = i+1;
                int count = 1;
                for(int j = 1; j < needle.size();j++)
                {
                    if(haystack[hay_ind] == needle[j])
                    {
                        count++;
                        hay_ind++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (count == needle.size())
                    return i;
            }
        }
        return -1;
        
    }
};
