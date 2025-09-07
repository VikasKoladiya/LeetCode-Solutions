class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }else if(n==2){
            return {1,-1};
        }else{
            for(int i=1;i<=n/2;i++){
                ans.push_back(-1*i);
            }
            for(int i=1;i<=n/2;i++){
                ans.push_back(i);
            }
            if(n%2!=0){
                ans.push_back(0);
            }
            return ans;
        }
    }
};