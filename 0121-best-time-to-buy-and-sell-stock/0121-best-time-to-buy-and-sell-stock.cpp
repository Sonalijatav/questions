class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minS = prices[0];
        int maxi = 0;
        for(int i=0;i<prices.size();i++){
           minS = min(minS,prices[i]);
           maxi = max(maxi, prices[i]-minS);
        }
       

        return maxi;
    }
};