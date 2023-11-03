class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size()-1;
        int mini=prices[0];
        int profit=0;
        for(int i=0; i<=n; i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            else{
                profit=max(profit, prices[i]-mini);
            }
        }
        return profit;
    }
};