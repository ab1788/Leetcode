class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int n= prices.size();
    //     int maxp=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         int max=0;
    //         for(int j=i+1;j<n;j++){
    //             if(prices[i]<prices[j]){
    //                 int diff= prices[j]-prices[i];
    //                 if(diff>max){
    //                     max=diff;
    //                 }
    //             }
    //         }
    //         if(max>maxp){
    //             maxp=max;
    //         }
    //     }
    //     return maxp;
    // }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price);      // Update minimum price seen so far
            maxProfit = max(maxProfit, price - minPrice); // Calculate max profit
            }
            return maxProfit;
    }
};