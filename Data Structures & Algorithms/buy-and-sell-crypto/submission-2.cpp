class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxProfit=0,minPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            minPrice=min(prices[i],minPrice);
            int profit=prices[i]-minPrice;
            mxProfit=max(profit,mxProfit);
        }
        return mxProfit;
    }
};
