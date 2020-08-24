// The question is similar to stock buy and sell
// The only difference is you can only buy and sell a 
// single stock
// You have to maximize the profit

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < n; i++)
        {
            if(prices[i] < minPrice)
                minPrice = prices[i];
            else if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};