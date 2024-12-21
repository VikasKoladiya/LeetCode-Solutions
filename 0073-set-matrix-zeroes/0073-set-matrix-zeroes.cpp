class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> zero(matrix[0].size());
        vector<vector<int>> mp;
        int n = matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    mp.push_back(temp);
                }
            }
        }
        for(auto ele : mp){
            int i = ele[0];
            int j = ele[1];
            matrix[i]=zero;
            cout<<i<<" "<<j<<endl;
            for(int p=0;p<n;p++){
                for(int k=0;k<m;k++){
                    if(j==k){
                        matrix[p][j]=0;
                    }
                    if(i==0){
                        matrix[i][k]=0;
                    }
                }
            }
        }
        return;
    }
};