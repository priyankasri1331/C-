class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max_profit = 0;
        for(unsigned int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[i-1])
            {
                max_profit += prices[i] - prices[i-1]; 
            }
            
        }
    return max_profit;   
    }
};
