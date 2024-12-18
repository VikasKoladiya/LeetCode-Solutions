class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        ans[0] = prices[0];
        int index=0;
        for(int i=0;i<prices.size()-1;i++){
            ans[index] = prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= prices[i]){
                    ans[index] = prices[i]-prices[j];
                    break;
                }
            }
            index++;
        }
        ans[index]=(prices[prices.size()-1]);
        return ans;
    }
};