class Solution {
public:
int maxProfit(vector<int>& prices) {
        int minbuy=prices[0],maxprofit=0;
        for(int i=1;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-minbuy);
            minbuy=min(minbuy,prices[i]);
        }
        return maxprofit;
    }
};