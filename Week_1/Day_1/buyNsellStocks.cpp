class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int maxi=0;
        for(int i=1;i<prices.size();i++){
            int diff=prices[i]-prices[i-1];
            sum+=diff;
            if(sum<0){
               sum=0;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};