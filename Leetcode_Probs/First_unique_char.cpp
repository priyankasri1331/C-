class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> umap;
        
        for (unsigned int i = 0; i < s.length(); i++)
        {
            auto it = umap.find(s[i]);
            if(it == umap.end())
            {
                umap[s[i]] = i;
            }
            else
            {
                umap[s[i]] = -1;
            }
        }
        int min_val = INT_MAX;
        for (auto i = umap.begin(); i != umap.end(); i++) 
        {
             if(i->second < min_val && (i->second != -1))
             {
                 min_val = i->second;
             }
        }
        
        if(min_val == INT_MAX)
        {
            return -1;
        }   
        return min_val;
        }

};
