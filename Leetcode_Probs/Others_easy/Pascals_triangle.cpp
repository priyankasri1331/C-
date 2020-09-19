class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ret;
        vector<int> vecreq;
        if (numRows == 0)
        {
            return ret;
        }
        
        vector<int> vec1{1};
        ret.push_back(vec1);

        
        for(int i = 1; i < numRows; i++)
        {
            vector<int> vecn(i + 1, 1);
            for(int j = 1; j < vecn.size() - 1; j++)
            {
                //cout << i << " " << j;
                vecreq = ret[i - 1];
                //cout << j << " " << i << endl;
                //cout << vecreq[j - 1] + vecreq[j] << endl;
                vecn[j] = vecreq[j - 1] + vecreq[j];
            }
            ret.push_back(vecn);  
        }
        
       return ret; 
    }
};
