class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool isInc = true;
        bool isDec = true;
        for(int i = 0; i < prices.size() - 1; i++){
            // see if the array is sorted
            if(prices[i] > prices[i+1]) isInc = false;
            
            if(prices[i] < prices[i+1]) isDec = false;
            
        }
        
        if(isInc) return  prices[prices.size() - 1] - prices[0];
        if(isDec) return 0;
        
        int profit = 0;
    
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1])
                profit += prices[i] - prices[i-1];
        }
        return profit;
    }
};