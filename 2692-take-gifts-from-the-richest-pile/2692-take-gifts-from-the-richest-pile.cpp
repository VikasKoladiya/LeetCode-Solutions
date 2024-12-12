class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long int ans = 0;
        int n = gifts.size();
        for(int i=0;i<k;i++){
            sort(gifts.rbegin(),gifts.rend());
            gifts.push_back(sqrt(gifts[0]));
            gifts.erase(gifts.begin());
        }
        for(int i=0;i<n;i++){
            ans+=gifts[i];
        }
        return ans;
    }
};