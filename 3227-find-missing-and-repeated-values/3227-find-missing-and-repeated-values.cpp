class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> m;
        int n = grid.size();
        vector<int> ans(2);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[grid[i][j]]++;
            }
        }
        int i=1;
        bool flag = true;
        for(auto p:m){
            if(p.second>1){
                ans[0]=p.first;
            }
            if(p.first!=i && flag){
                ans[1] = i;
                flag = false;
            }
            i++;
        }
        if(ans[1]==0){
            ans[1]=n*n;
        }
        return ans;
    }
};