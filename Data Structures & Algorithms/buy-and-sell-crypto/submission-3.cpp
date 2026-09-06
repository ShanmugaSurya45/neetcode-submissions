class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cmin=prices[0];
        for(int i=1;i<prices.size();i++){
            
            if(cmin>prices[i]){

                cmin=prices[i];
            }
            else{
                int sum=prices[i]-cmin;
                profit=max(profit,sum);
            }
        }
        return profit;

        
    }
};
