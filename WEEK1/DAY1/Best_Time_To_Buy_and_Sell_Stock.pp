class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            // if current price is smaller, buy here
            if(prices[i] < buy) {
                buy = prices[i];
            }

            // calculate profit if sold today
            int currentProfit = prices[i] - buy;

            if(currentProfit > profit) {
                profit = currentProfit;
            }
        }

        return profit;
    }
};
