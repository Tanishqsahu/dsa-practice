class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=prices[0];
        int max_profit=0;

    
        for(int i=1;i<prices.size();i++){
            int current_price=prices[i];
            
            if(current_price<min_price){
                min_price=current_price;
            }
            else{
                int profit=current_price-min_price;
                max_profit=max(max_profit,profit);
            }


        }
        

        return max_profit;
        
    }
};