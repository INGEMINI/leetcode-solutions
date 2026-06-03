class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minele = prices[0];
        int maxprofit = 0;
        int cost = 0;
        for(int i = 1;i<n;i++){
           cost = prices[i]-minele;
           maxprofit= max(maxprofit,cost);
           minele = min(minele,prices[i]);


        }
        return maxprofit;
        
    }
};