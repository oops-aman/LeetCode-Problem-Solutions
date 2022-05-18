class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size(), i;
        int minPrice = prices[0];
        int maxProfit = 0;
        for (i = 1; i < n; i++)
        {
            if (minPrice > prices[i])
            {
                minPrice = prices[i];
            }
            else if (prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};